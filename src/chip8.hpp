#ifndef CHIP8_SRC_CHIP8_HPP
#define CHIP8_SRC_CHIP8_HPP

#include <array>
#include <stack>
#include <string>

class Chip8 {
  public:
    Chip8();
    virtual ~Chip8();

    void EmulateCycle();
    bool load(std::string file_path);

  public:
    bool draw_flag;
    std::array<uint8_t, 2048> graphics_buffer;
    std::array<uint8_t, 16> keypad;
  
  private:
    std::stack<uint32_t> _stack;
    std::array<uint8_t, 4096> _memory;
    std::array<uint8_t, 16> _v_registers;
    
    uint32_t _program_counter;
    uint32_t _op_code;
    uint32_t _index_register;

    uint8_t _delay_timer;
    uint8_t _sound_timer;
};

#endif // !CHIP8_SRC_CHIP8_HPP

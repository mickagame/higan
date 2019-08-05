#define op(id, name, ...) case id: return instruction##name(__VA_ARGS__);

auto SM83::instruction() -> void {
  auto opcode = operand();

  switch(opcode) {
  op(0x00, NOP)
  op(0x01, LD_Direct_Data, BC)
  op(0x02, LD_Indirect_Direct, BC, A)
  op(0x03, INC_Direct, BC)
  op(0x04, INC_Direct, B)
  op(0x05, DEC_Direct, B)
  op(0x06, LD_Direct_Data, B)
  op(0x07, RLCA)
  op(0x08, LD_Address_Direct, SP)
  op(0x09, ADD_Direct_Direct, HL, BC)
  op(0x0a, LD_Direct_Indirect, A, BC)
  op(0x0b, DEC_Direct, BC)
  op(0x0c, INC_Direct, C)
  op(0x0d, DEC_Direct, C)
  op(0x0e, LD_Direct_Data, C)
  op(0x0f, RRCA)
  op(0x10, STOP)
  op(0x11, LD_Direct_Data, DE)
  op(0x12, LD_Indirect_Direct, DE, A)
  op(0x13, INC_Direct, DE)
  op(0x14, INC_Direct, D)
  op(0x15, DEC_Direct, D)
  op(0x16, LD_Direct_Data, D)
  op(0x17, RLA)
  op(0x18, JR_Condition_Relative, 1)
  op(0x19, ADD_Direct_Direct, HL, DE)
  op(0x1a, LD_Direct_Indirect, A, DE)
  op(0x1b, DEC_Direct, DE)
  op(0x1c, INC_Direct, E)
  op(0x1d, DEC_Direct, E)
  op(0x1e, LD_Direct_Data, E)
  op(0x1f, RRA)
  op(0x20, JR_Condition_Relative, ZF == 0)
  op(0x21, LD_Direct_Data, HL)
  op(0x22, LD_IndirectIncrement_Direct, HL, A)
  op(0x23, INC_Direct, HL)
  op(0x24, INC_Direct, H)
  op(0x25, DEC_Direct, H)
  op(0x26, LD_Direct_Data, H)
  op(0x27, DAA)
  op(0x28, JR_Condition_Relative, ZF == 1)
  op(0x29, ADD_Direct_Direct, HL, HL)
  op(0x2a, LD_Direct_IndirectIncrement, A, HL)
  op(0x2b, DEC_Direct, HL)
  op(0x2c, INC_Direct, L)
  op(0x2d, DEC_Direct, L)
  op(0x2e, LD_Direct_Data, L)
  op(0x2f, CPL)
  op(0x30, JR_Condition_Relative, CF == 0)
  op(0x31, LD_Direct_Data, SP)
  op(0x32, LD_IndirectDecrement_Direct, HL, A)
  op(0x33, INC_Direct, SP)
  op(0x34, INC_Indirect, HL)
  op(0x35, DEC_Indirect, HL)
  op(0x36, LD_Indirect_Data, HL)
  op(0x37, SCF)
  op(0x38, JR_Condition_Relative, CF == 1)
  op(0x39, ADD_Direct_Direct, HL, SP)
  op(0x3a, LD_Direct_IndirectDecrement, A, HL)
  op(0x3b, DEC_Direct, SP)
  op(0x3c, INC_Direct, A)
  op(0x3d, DEC_Direct, A)
  op(0x3e, LD_Direct_Data, A)
  op(0x3f, CCF)
  op(0x40, LD_Direct_Direct, B, B)
  op(0x41, LD_Direct_Direct, B, C)
  op(0x42, LD_Direct_Direct, B, D)
  op(0x43, LD_Direct_Direct, B, E)
  op(0x44, LD_Direct_Direct, B, H)
  op(0x45, LD_Direct_Direct, B, L)
  op(0x46, LD_Direct_Indirect, B, HL)
  op(0x47, LD_Direct_Direct, B, A)
  op(0x48, LD_Direct_Direct, C, B)
  op(0x49, LD_Direct_Direct, C, C)
  op(0x4a, LD_Direct_Direct, C, D)
  op(0x4b, LD_Direct_Direct, C, E)
  op(0x4c, LD_Direct_Direct, C, H)
  op(0x4d, LD_Direct_Direct, C, L)
  op(0x4e, LD_Direct_Indirect, C, HL)
  op(0x4f, LD_Direct_Direct, C, A)
  op(0x50, LD_Direct_Direct, D, B)
  op(0x51, LD_Direct_Direct, D, C)
  op(0x52, LD_Direct_Direct, D, D)
  op(0x53, LD_Direct_Direct, D, E)
  op(0x54, LD_Direct_Direct, D, H)
  op(0x55, LD_Direct_Direct, D, L)
  op(0x56, LD_Direct_Indirect, D, HL)
  op(0x57, LD_Direct_Direct, D, A)
  op(0x58, LD_Direct_Direct, E, B)
  op(0x59, LD_Direct_Direct, E, C)
  op(0x5a, LD_Direct_Direct, E, D)
  op(0x5b, LD_Direct_Direct, E, E)
  op(0x5c, LD_Direct_Direct, E, H)
  op(0x5d, LD_Direct_Direct, E, L)
  op(0x5e, LD_Direct_Indirect, E, HL)
  op(0x5f, LD_Direct_Direct, E, A)
  op(0x60, LD_Direct_Direct, H, B)
  op(0x61, LD_Direct_Direct, H, C)
  op(0x62, LD_Direct_Direct, H, D)
  op(0x63, LD_Direct_Direct, H, E)
  op(0x64, LD_Direct_Direct, H, H)
  op(0x65, LD_Direct_Direct, H, L)
  op(0x66, LD_Direct_Indirect, H, HL)
  op(0x67, LD_Direct_Direct, H, A)
  op(0x68, LD_Direct_Direct, L, B)
  op(0x69, LD_Direct_Direct, L, C)
  op(0x6a, LD_Direct_Direct, L, D)
  op(0x6b, LD_Direct_Direct, L, E)
  op(0x6c, LD_Direct_Direct, L, H)
  op(0x6d, LD_Direct_Direct, L, L)
  op(0x6e, LD_Direct_Indirect, L, HL)
  op(0x6f, LD_Direct_Direct, L, A)
  op(0x70, LD_Indirect_Direct, HL, B)
  op(0x71, LD_Indirect_Direct, HL, C)
  op(0x72, LD_Indirect_Direct, HL, D)
  op(0x73, LD_Indirect_Direct, HL, E)
  op(0x74, LD_Indirect_Direct, HL, H)
  op(0x75, LD_Indirect_Direct, HL, L)
  op(0x76, HALT)
  op(0x77, LD_Indirect_Direct, HL, A)
  op(0x78, LD_Direct_Direct, A, B)
  op(0x79, LD_Direct_Direct, A, C)
  op(0x7a, LD_Direct_Direct, A, D)
  op(0x7b, LD_Direct_Direct, A, E)
  op(0x7c, LD_Direct_Direct, A, H)
  op(0x7d, LD_Direct_Direct, A, L)
  op(0x7e, LD_Direct_Indirect, A, HL)
  op(0x7f, LD_Direct_Direct, A, A)
  op(0x80, ADD_Direct_Direct, A, B)
  op(0x81, ADD_Direct_Direct, A, C)
  op(0x82, ADD_Direct_Direct, A, D)
  op(0x83, ADD_Direct_Direct, A, E)
  op(0x84, ADD_Direct_Direct, A, H)
  op(0x85, ADD_Direct_Direct, A, L)
  op(0x86, ADD_Direct_Indirect, A, HL)
  op(0x87, ADD_Direct_Direct, A, A)
  op(0x88, ADC_Direct_Direct, A, B)
  op(0x89, ADC_Direct_Direct, A, C)
  op(0x8a, ADC_Direct_Direct, A, D)
  op(0x8b, ADC_Direct_Direct, A, E)
  op(0x8c, ADC_Direct_Direct, A, H)
  op(0x8d, ADC_Direct_Direct, A, L)
  op(0x8e, ADC_Direct_Indirect, A, HL)
  op(0x8f, ADC_Direct_Direct, A, A)
  op(0x90, SUB_Direct_Direct, A, B)
  op(0x91, SUB_Direct_Direct, A, C)
  op(0x92, SUB_Direct_Direct, A, D)
  op(0x93, SUB_Direct_Direct, A, E)
  op(0x94, SUB_Direct_Direct, A, H)
  op(0x95, SUB_Direct_Direct, A, L)
  op(0x96, SUB_Direct_Indirect, A, HL)
  op(0x97, SUB_Direct_Direct, A, A)
  op(0x98, SBC_Direct_Direct, A, B)
  op(0x99, SBC_Direct_Direct, A, C)
  op(0x9a, SBC_Direct_Direct, A, D)
  op(0x9b, SBC_Direct_Direct, A, E)
  op(0x9c, SBC_Direct_Direct, A, H)
  op(0x9d, SBC_Direct_Direct, A, L)
  op(0x9e, SBC_Direct_Indirect, A, HL)
  op(0x9f, SBC_Direct_Direct, A, A)
  op(0xa0, AND_Direct_Direct, A, B)
  op(0xa1, AND_Direct_Direct, A, C)
  op(0xa2, AND_Direct_Direct, A, D)
  op(0xa3, AND_Direct_Direct, A, E)
  op(0xa4, AND_Direct_Direct, A, H)
  op(0xa5, AND_Direct_Direct, A, L)
  op(0xa6, AND_Direct_Indirect, A, HL)
  op(0xa7, AND_Direct_Direct, A, A)
  op(0xa8, XOR_Direct_Direct, A, B)
  op(0xa9, XOR_Direct_Direct, A, C)
  op(0xaa, XOR_Direct_Direct, A, D)
  op(0xab, XOR_Direct_Direct, A, E)
  op(0xac, XOR_Direct_Direct, A, H)
  op(0xad, XOR_Direct_Direct, A, L)
  op(0xae, XOR_Direct_Indirect, A, HL)
  op(0xaf, XOR_Direct_Direct, A, A)
  op(0xb0, OR_Direct_Direct, A, B)
  op(0xb1, OR_Direct_Direct, A, C)
  op(0xb2, OR_Direct_Direct, A, D)
  op(0xb3, OR_Direct_Direct, A, E)
  op(0xb4, OR_Direct_Direct, A, H)
  op(0xb5, OR_Direct_Direct, A, L)
  op(0xb6, OR_Direct_Indirect, A, HL)
  op(0xb7, OR_Direct_Direct, A, A)
  op(0xb8, CP_Direct_Direct, A, B)
  op(0xb9, CP_Direct_Direct, A, C)
  op(0xba, CP_Direct_Direct, A, D)
  op(0xbb, CP_Direct_Direct, A, E)
  op(0xbc, CP_Direct_Direct, A, H)
  op(0xbd, CP_Direct_Direct, A, L)
  op(0xbe, CP_Direct_Indirect, A, HL)
  op(0xbf, CP_Direct_Direct, A, A)
  op(0xc0, RET_Condition, ZF == 0)
  op(0xc1, POP_Direct, BC)
  op(0xc2, JP_Condition_Address, ZF == 0)
  op(0xc3, JP_Condition_Address, 1)
  op(0xc4, CALL_Condition_Address, ZF == 0)
  op(0xc5, PUSH_Direct, BC)
  op(0xc6, ADD_Direct_Data, A)
  op(0xc7, RST_Implied, 0x00)
  op(0xc8, RET_Condition, ZF == 1)
  op(0xc9, RET)
  op(0xca, JP_Condition_Address, ZF == 1)
  op(0xcb, CB)
  op(0xcc, CALL_Condition_Address, ZF == 1)
  op(0xcd, CALL_Condition_Address, 1)
  op(0xce, ADC_Direct_Data, A)
  op(0xcf, RST_Implied, 0x08)
  op(0xd0, RET_Condition, CF == 0)
  op(0xd1, POP_Direct, DE)
  op(0xd2, JP_Condition_Address, CF == 0)
  op(0xd4, CALL_Condition_Address, CF == 0)
  op(0xd5, PUSH_Direct, DE)
  op(0xd6, SUB_Direct_Data, A)
  op(0xd7, RST_Implied, 0x10)
  op(0xd8, RET_Condition, CF == 1)
  op(0xd9, RETI)
  op(0xda, JP_Condition_Address, CF == 1)
  op(0xdc, CALL_Condition_Address, CF == 1)
  op(0xde, SBC_Direct_Data, A)
  op(0xdf, RST_Implied, 0x18)
  op(0xe0, LDH_Address_Direct, A)
  op(0xe1, POP_Direct, HL)
  op(0xe2, LDH_Indirect_Direct, C, A)
  op(0xe5, PUSH_Direct, HL)
  op(0xe6, AND_Direct_Data, A)
  op(0xe7, RST_Implied, 0x20)
  op(0xe8, ADD_Direct_Relative, SP)
  op(0xe9, JP_Direct, HL)
  op(0xea, LD_Address_Direct, A)
  op(0xee, XOR_Direct_Data, A)
  op(0xef, RST_Implied, 0x28)
  op(0xf0, LDH_Direct_Address, A)
  op(0xf1, POP_Direct, AF)
  op(0xf2, LDH_Direct_Indirect, A, C)
  op(0xf3, DI)
  op(0xf5, PUSH_Direct, AF)
  op(0xf6, OR_Direct_Data, A)
  op(0xf7, RST_Implied, 0x30)
  op(0xf8, LD_Direct_DirectRelative, HL, SP)
  op(0xf9, LD_Direct_Direct, SP, HL)
  op(0xfa, LD_Direct_Address, A)
  op(0xfb, EI)
  op(0xfe, CP_Direct_Data, A)
  op(0xff, RST_Implied, 0x38)
  }
}

auto SM83::instructionCB() -> void {
  auto opcode = operand();

  switch(opcode) {
  op(0x00, RLC_Direct, B)
  op(0x01, RLC_Direct, C)
  op(0x02, RLC_Direct, D)
  op(0x03, RLC_Direct, E)
  op(0x04, RLC_Direct, H)
  op(0x05, RLC_Direct, L)
  op(0x06, RLC_Indirect, HL)
  op(0x07, RLC_Direct, A)
  op(0x08, RRC_Direct, B)
  op(0x09, RRC_Direct, C)
  op(0x0a, RRC_Direct, D)
  op(0x0b, RRC_Direct, E)
  op(0x0c, RRC_Direct, H)
  op(0x0d, RRC_Direct, L)
  op(0x0e, RRC_Indirect, HL)
  op(0x0f, RRC_Direct, A)
  op(0x10, RL_Direct, B)
  op(0x11, RL_Direct, C)
  op(0x12, RL_Direct, D)
  op(0x13, RL_Direct, E)
  op(0x14, RL_Direct, H)
  op(0x15, RL_Direct, L)
  op(0x16, RL_Indirect, HL)
  op(0x17, RL_Direct, A)
  op(0x18, RR_Direct, B)
  op(0x19, RR_Direct, C)
  op(0x1a, RR_Direct, D)
  op(0x1b, RR_Direct, E)
  op(0x1c, RR_Direct, H)
  op(0x1d, RR_Direct, L)
  op(0x1e, RR_Indirect, HL)
  op(0x1f, RR_Direct, A)
  op(0x20, SLA_Direct, B)
  op(0x21, SLA_Direct, C)
  op(0x22, SLA_Direct, D)
  op(0x23, SLA_Direct, E)
  op(0x24, SLA_Direct, H)
  op(0x25, SLA_Direct, L)
  op(0x26, SLA_Indirect, HL)
  op(0x27, SLA_Direct, A)
  op(0x28, SRA_Direct, B)
  op(0x29, SRA_Direct, C)
  op(0x2a, SRA_Direct, D)
  op(0x2b, SRA_Direct, E)
  op(0x2c, SRA_Direct, H)
  op(0x2d, SRA_Direct, L)
  op(0x2e, SRA_Indirect, HL)
  op(0x2f, SRA_Direct, A)
  op(0x30, SWAP_Direct, B)
  op(0x31, SWAP_Direct, C)
  op(0x32, SWAP_Direct, D)
  op(0x33, SWAP_Direct, E)
  op(0x34, SWAP_Direct, H)
  op(0x35, SWAP_Direct, L)
  op(0x36, SWAP_Indirect, HL)
  op(0x37, SWAP_Direct, A)
  op(0x38, SRL_Direct, B)
  op(0x39, SRL_Direct, C)
  op(0x3a, SRL_Direct, D)
  op(0x3b, SRL_Direct, E)
  op(0x3c, SRL_Direct, H)
  op(0x3d, SRL_Direct, L)
  op(0x3e, SRL_Indirect, HL)
  op(0x3f, SRL_Direct, A)
  }

  //opcodes 0x40-0xff [op(0x00 - 0x07) declared above]
  uint3 bit = opcode.range(3,5);
  switch(opcode.range(6,7) << 3 | opcode.range(0,2)) {
  op(0x08, BIT_Index_Direct, bit, B)
  op(0x09, BIT_Index_Direct, bit, C)
  op(0x0a, BIT_Index_Direct, bit, D)
  op(0x0b, BIT_Index_Direct, bit, E)
  op(0x0c, BIT_Index_Direct, bit, H)
  op(0x0d, BIT_Index_Direct, bit, L)
  op(0x0e, BIT_Index_Indirect, bit, HL)
  op(0x0f, BIT_Index_Direct, bit, A)
  op(0x10, RES_Index_Direct, bit, B)
  op(0x11, RES_Index_Direct, bit, C)
  op(0x12, RES_Index_Direct, bit, D)
  op(0x13, RES_Index_Direct, bit, E)
  op(0x14, RES_Index_Direct, bit, H)
  op(0x15, RES_Index_Direct, bit, L)
  op(0x16, RES_Index_Indirect, bit, HL)
  op(0x17, RES_Index_Direct, bit, A)
  op(0x18, SET_Index_Direct, bit, B)
  op(0x19, SET_Index_Direct, bit, C)
  op(0x1a, SET_Index_Direct, bit, D)
  op(0x1b, SET_Index_Direct, bit, E)
  op(0x1c, SET_Index_Direct, bit, H)
  op(0x1d, SET_Index_Direct, bit, L)
  op(0x1e, SET_Index_Indirect, bit, HL)
  op(0x1f, SET_Index_Direct, bit, A)
  }
}

#undef op

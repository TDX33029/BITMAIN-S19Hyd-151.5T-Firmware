// FUN_006382f8 @ 006382f8 size=564 calls_out=5 calls_in=2
// strings: 

uint FUN_006382f8(int param_1,uint param_2,int *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar1 = param_2 & 0xc0;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else if (uVar1 == 0x40) {
    uVar3 = 1;
  }
  else {
    if (uVar1 != 0x80) {
      local_48 = param_1 + 0x80;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_01857b58,&DAT_01857be8);
    }
    uVar3 = 2;
    local_54 = param_1 + 0x40;
  }
  param_2 = param_2 & 0x3f;
  uVar2 = uVar3;
  if (param_4 >> 5 < uVar3) {
    uVar2 = param_4 >> 5;
  }
  if (uVar2 != 0) {
    local_48 = 0x6a09e667;
    local_44 = -0x4498517b;
    local_40 = 0x3c6ef372;
    local_3c = -0x5ab00ac6;
    local_38 = 0x510e527f;
    local_34 = -0x64fa9774;
    local_30 = 0x1f83d9ab;
    local_2c = 0x5be0cd19;
    FUN_006387d8(&local_48,param_1,0x40,0x9b05688c,0,0,4);
    param_3[5] = local_34;
    param_3[7] = local_2c;
    *param_3 = local_48;
    param_3[6] = local_30;
    param_3[4] = local_38;
    param_3[3] = local_3c;
    param_3[2] = local_40;
    param_3[1] = local_44;
    if (uVar2 != 1) {
      local_48 = 0x6a09e667;
      local_44 = -0x4498517b;
      local_40 = 0x3c6ef372;
      local_3c = -0x5ab00ac6;
      local_38 = 0x510e527f;
      local_34 = -0x64fa9774;
      local_30 = 0x1f83d9ab;
      local_2c = 0x5be0cd19;
      FUN_006387d8(&local_48,local_54,0x40,0x1f83d9ab,0,0,4);
      param_3[0xd] = local_34;
      param_3[0xf] = local_2c;
      param_3[0xe] = local_30;
      param_3[0xc] = local_38;
      param_3[0xb] = local_3c;
      param_3[10] = local_40;
      param_3[9] = local_44;
      param_3[8] = local_48;
    }
  }
  if (param_2 != 0) {
    if (param_4 < uVar3 << 5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3 * 0x20,param_4,param_4,&DAT_01857bd8);
    }
    param_4 = param_4 + uVar3 * -0x20;
    if (param_4 < 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0x20,param_4,&DAT_01857bb8);
    }
    if (param_2 != 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7204(0x20,param_2,&DAT_01857bc8);
    }
    FUN_016dd1aa(param_3 + uVar3 * 8,param_1 + uVar1,0x20);
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}


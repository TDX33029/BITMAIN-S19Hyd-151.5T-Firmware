// FUN_01222ee0 @ 01222ee0 size=428 calls_out=3 calls_in=2
// strings: 

void FUN_01222ee0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 local_28 [8];
  uint local_20;
  uint local_1c;
  undefined1 uStack_11;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    uVar1 = (uint)(byte)param_2[1];
    break;
  case 2:
    uVar1 = (uint)(ushort)param_2[1];
    break;
  case 3:
    uVar1 = param_2[1];
    break;
  case 4:
    uVar1 = param_2[2];
    if (param_2[3] != 0) {
      local_28[0] = 1;
      local_20 = uVar1;
      local_1c = param_2[3];
      FUN_0123bf08(param_1,local_28,&uStack_11,&DAT_01c252f4);
      goto LAB_01223030;
    }
    goto LAB_01222fc4;
  case 5:
    uVar1 = (uint)(char)param_2[1];
    if (0x7fffffff < uVar1) {
      local_1c = (int)uVar1 >> 0x1f;
      local_28[0] = 2;
      local_20 = uVar1;
      FUN_0123bf08(param_1,local_28,&uStack_11,&DAT_01c252f4);
      goto LAB_01223030;
    }
    goto LAB_01223024;
  case 6:
    uVar1 = (uint)(short)param_2[1];
    if (0x7fffffff < uVar1) {
      local_1c = (int)uVar1 >> 0x1f;
      local_28[0] = 2;
      local_20 = uVar1;
      FUN_0123bf08(param_1,local_28,&uStack_11,&DAT_01c252f4);
      goto LAB_01223030;
    }
    goto LAB_01223024;
  case 7:
    uVar1 = param_2[1];
    if ((int)uVar1 < 0) {
      local_1c = (int)uVar1 >> 0x1f;
      local_28[0] = 2;
      local_20 = uVar1;
      FUN_0123bf08(param_1,local_28,&uStack_11,&DAT_01c252f4);
      goto LAB_01223030;
    }
LAB_01223024:
    *param_1 = 2;
    param_1[1] = uVar1;
    goto LAB_01223030;
  case 8:
    uVar1 = param_2[2];
    if (param_2[3] != 0) {
      local_28[0] = 2;
      local_20 = uVar1;
      local_1c = param_2[3];
      FUN_0123bf08(param_1,local_28,&uStack_11,&DAT_01c252f4);
      goto LAB_01223030;
    }
LAB_01222fc4:
    *param_1 = 2;
    param_1[1] = uVar1;
    goto LAB_01223030;
  default:
    FUN_012223f8(param_1,param_2,&uStack_11,&DAT_01c252f4);
    return;
  }
  *param_1 = 2;
  param_1[1] = uVar1;
LAB_01223030:
  FUN_012222e0(param_2);
  return;
}


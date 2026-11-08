// FUN_014c93b8 @ 014c93b8 size=288 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_014c93b8(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_28 [8];
  uint local_20;
  uint local_1c;
  undefined1 uStack_11;
  
  uVar1 = 0x15;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    local_20 = (uint)(byte)param_1[1];
    break;
  case 2:
    local_20 = (uint)(ushort)param_1[1];
    break;
  case 3:
    local_20 = param_1[1];
    break;
  case 4:
    local_20 = param_1[2];
    local_1c = param_1[3];
    if (local_1c != 0) {
      uVar2 = 1;
      local_28[0] = 1;
      local_20 = FUN_01967740(local_28,&uStack_11,&DAT_01cf9fa4);
      goto LAB_014c94a0;
    }
    break;
  case 5:
    local_20 = (uint)(char)param_1[1];
    goto LAB_014c9494;
  case 6:
    local_20 = (uint)(short)param_1[1];
    goto LAB_014c9494;
  case 7:
    local_20 = param_1[1];
LAB_014c9494:
    if ((int)local_20 < 0) {
      local_1c = (int)local_20 >> 0x1f;
LAB_014c94cc:
      local_28[0] = 2;
      local_20 = FUN_01967740(local_28,&uStack_11,&DAT_01cf9fa4);
LAB_014c94d8:
      uVar2 = 1;
      goto LAB_014c94a0;
    }
    break;
  case 8:
    local_20 = param_1[2];
    local_1c = param_1[3];
    if (local_1c == 0) break;
    goto LAB_014c94cc;
  default:
    local_20 = FUN_014c82dc(param_1,&uStack_11,&DAT_01cf9fa4);
    goto LAB_014c94d8;
  }
  uVar2 = 0;
LAB_014c94a0:
  return CONCAT44(local_20,uVar2);
}


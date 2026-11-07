// FUN_01223b30 @ 01223b30 size=276 calls_out=2 calls_in=1
// strings: 

void FUN_01223b30(undefined4 *param_1,uint *param_2)

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
    goto LAB_01223bf0;
  case 2:
    uVar1 = (uint)(ushort)param_2[1];
    goto LAB_01223bf0;
  case 3:
    uVar1 = param_2[1];
LAB_01223bf0:
    *param_1 = 2;
    param_1[1] = uVar1;
    return;
  case 4:
    local_20 = param_2[2];
    local_1c = param_2[3];
    if (local_1c == 0) {
LAB_01223be0:
      *param_1 = 2;
      param_1[1] = local_20;
      return;
    }
    local_28[0] = 1;
    goto LAB_01223bb8;
  case 5:
    local_20 = (uint)(char)param_2[1];
    break;
  case 6:
    local_20 = (uint)(short)param_2[1];
    break;
  case 7:
    local_20 = param_2[1];
    break;
  case 8:
    local_20 = param_2[2];
    local_1c = param_2[3];
    if (local_1c == 0) goto LAB_01223be0;
    local_28[0] = 2;
    goto LAB_01223bb8;
  default:
    FUN_01222458(param_1,param_2,&uStack_11,&DAT_01cf9934);
    return;
  }
  if (-1 < (int)local_20) {
    *param_1 = 2;
    param_1[1] = local_20;
    return;
  }
  local_28[0] = 2;
  local_1c = (int)local_20 >> 0x1f;
LAB_01223bb8:
  FUN_0123bf08(param_1,local_28,&uStack_11,&DAT_01cf9934);
  return;
}


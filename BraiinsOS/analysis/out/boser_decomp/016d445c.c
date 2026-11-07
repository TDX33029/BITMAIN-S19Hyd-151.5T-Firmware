// FUN_016d445c @ 016d445c size=228 calls_out=1 calls_in=0
// strings: 

void FUN_016d445c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int local_80;
  uint local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_3c;
  undefined4 local_38;
  
  piVar2 = (int *)*param_2;
  uVar1 = param_2[1] + 1;
  if (param_2[1] == -1) {
    local_3c = 0x17;
    local_38 = 0xffffffff;
    FUN_016d4540(&local_80,piVar2[1],piVar2[2],param_3,&local_3c);
    uVar1 = local_7c;
    if (local_80 != 0x22) {
      param_1[2] = local_78;
      param_1[3] = iStack_74;
      param_1[4] = iStack_70;
      param_1[5] = iStack_6c;
      param_1[6] = local_68;
      param_1[7] = iStack_64;
      param_1[8] = iStack_60;
      param_1[9] = iStack_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = local_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      param_1[0xe] = iStack_48;
      param_1[0xf] = iStack_44;
      *param_1 = local_80;
      param_1[1] = local_7c;
      return;
    }
  }
  local_7c = *(uint *)(*piVar2 + 0x60);
  if (local_7c < uVar1) {
    local_80 = 0x17;
    FUN_016d4540(param_1,piVar2[1],piVar2[2],param_3,&local_80);
  }
  else {
    param_2[1] = uVar1;
    *param_1 = 0x22;
  }
  return;
}


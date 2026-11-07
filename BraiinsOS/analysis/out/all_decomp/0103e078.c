// FUN_0103e078 @ 0103e078 size=352 calls_out=4 calls_in=4
// strings: 

void FUN_0103e078(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar5 = &local_48;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  DataMemoryBarrier(0xb);
  if (DAT_018dd98c == (code *)0x0) {
    pcVar3 = (code *)FUN_0100f390();
    if (pcVar3 == (code *)0xffffffff) goto LAB_0103e15c;
LAB_0103e0d0:
    uVar6 = 0x20;
    do {
      uVar1 = (*pcVar3)(puVar5,uVar6,0);
      if ((int)uVar1 < 1) {
        if (uVar1 != 0xffffffff) goto LAB_0103e140;
        piVar2 = (int *)FUN_016d2bc8();
        iVar4 = 0x10001;
        if (0 < *piVar2) {
          iVar4 = -*piVar2;
        }
        if (iVar4 != -4) goto joined_r0x0103e16c;
      }
      else {
        if (uVar6 < uVar1) goto LAB_0103e140;
        puVar5 = (undefined4 *)((int)puVar5 + uVar1);
        uVar6 = uVar6 - uVar1;
      }
    } while (uVar6 != 0);
  }
  else {
    pcVar3 = DAT_018dd98c;
    if (DAT_018dd98c != (code *)0xffffffff) goto LAB_0103e0d0;
LAB_0103e15c:
    iVar4 = FUN_0100f050(&local_48,0x20);
joined_r0x0103e16c:
    if (iVar4 != 0) {
LAB_0103e140:
      uVar6 = param_1[0xc];
      iVar4 = param_1[0xd];
      goto LAB_0103e1b8;
    }
  }
  param_1[1] = local_44;
  param_1[2] = local_40;
  uVar6 = param_1[0xc];
  iVar4 = param_1[0xd];
  *param_1 = local_48;
  param_1[3] = local_3c;
  param_1[4] = local_38;
  param_1[5] = local_34;
  param_1[6] = local_30;
  param_1[7] = local_2c;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
LAB_0103e1b8:
  param_1[0xe] = uVar6 - 0x100;
  param_1[0xf] = iVar4 - (uint)(uVar6 < 0x100);
  FUN_0103d438(param_1,param_2);
  return;
}


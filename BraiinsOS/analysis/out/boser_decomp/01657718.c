// FUN_01657718 @ 01657718 size=384 calls_out=6 calls_in=1
// strings: Timed out | Unexpected poll event

void FUN_01657718(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_b0 [132];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  
  FUN_01bed93e(auStack_b0,0,0x80);
  iVar6 = param_2[7];
  iVar4 = -1;
  local_28 = 1;
  local_2c = *(undefined4 *)(iVar6 + 8);
  if (*param_2 == 1) {
    iVar4 = param_2[1] * 1000 + param_2[2] / 1000000;
  }
  uVar5 = 1;
  iVar4 = FUN_01bea68a(&local_2c,1,iVar4);
  if (iVar4 == 0) {
    FUN_019a18a8(param_1 + 1,0x16,"Timed out",9);
  }
  else {
    if (iVar4 == -1) {
      puVar1 = (undefined4 *)FUN_01be3244();
      uVar5 = *puVar1;
      param_1[1] = 0;
      param_1[2] = uVar5;
    }
    else if ((local_28 & 0x10000) == 0) {
      FUN_019a18a8(param_1 + 1,0x28,"Unexpected poll event",0x15);
    }
    else {
      iVar4 = param_2[4];
      uVar7 = param_2[5];
      uVar5 = *(undefined4 *)(iVar6 + 8);
      local_24 = 0x80;
      do {
        uVar2 = FUN_01be8db2(uVar5,iVar4,uVar7,0,auStack_b0,&local_24);
        if (uVar2 != 0xffffffff) {
          if (-1 < (int)uVar2) {
            if (uVar7 < uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar2,uVar7,&DAT_01d06c70);
            }
            param_1[1] = iVar4;
            uVar5 = 0;
            param_1[2] = uVar2;
            goto LAB_01657878;
          }
          break;
        }
        piVar3 = (int *)FUN_01be3244();
      } while (*piVar3 == 4);
      puVar1 = (undefined4 *)FUN_01be3244();
      uVar5 = *puVar1;
      param_1[1] = 0;
      param_1[2] = uVar5;
    }
    uVar5 = 1;
  }
LAB_01657878:
  *param_1 = uVar5;
  return;
}


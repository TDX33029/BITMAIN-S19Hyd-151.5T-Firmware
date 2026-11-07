// FUN_011f6ff0 @ 011f6ff0 size=284 calls_out=5 calls_in=2
// strings: 

void FUN_011f6ff0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    puVar2 = (uint *)*param_2;
    param_2[1] = puVar2;
    local_30 = *puVar2;
    uStack_2c = puVar2[1];
    uVar5 = puVar2[2];
    uStack_24 = puVar2[3];
    *puVar2 = 2;
    uStack_28 = uVar5;
    if (local_30 != 2) {
      FUN_007372d8(&local_30);
    }
    piVar3 = (int *)(param_2[1] + 0x30);
    if (*piVar3 != 4) {
      param_2[2] = piVar3;
      goto LAB_011f7084;
    }
    uVar6 = *(uint *)(param_2[1] + 0x34);
    local_30 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d270e0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d270e0);
  case 3:
    piVar3 = (int *)param_2[2];
LAB_011f7084:
    FUN_0195df34(&local_30,piVar3,param_3);
    uVar6 = uStack_2c;
    if ((char)local_30 == '\x05') {
      *param_1 = 5;
      uVar1 = 3;
      goto LAB_011f70f8;
    }
    uVar5 = local_30 >> 8;
    if ((local_30 & 0xff) == 4) {
      FUN_011f745c(param_2[1] + 0x30);
      iVar4 = param_2[1];
      local_30 = 4;
      *(undefined4 *)(iVar4 + 0x30) = 4;
      *(uint *)(iVar4 + 0x34) = uVar6;
    }
  }
  *param_1 = (char)local_30;
  param_1[3] = (char)(uVar5 >> 0x10);
  uVar1 = 1;
  *(short *)(param_1 + 1) = (short)uVar5;
  *(uint *)(param_1 + 4) = uVar6;
LAB_011f70f8:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}


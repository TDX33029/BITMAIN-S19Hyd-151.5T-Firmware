// FUN_01583d48 @ 01583d48 size=448 calls_out=7 calls_in=2
// strings: 

int FUN_01583d48(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  uint local_80;
  uint local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uStack_90 = CONCAT44(local_ac,local_b0);
  iVar4 = 0;
  if (*param_2 == '\x04') {
    uVar8 = param_1[2];
    uVar7 = param_1[3];
    if (uVar7 == 0 && (*(uint *)(param_2 + 0xc) <= uVar8) <= uVar7) {
      piVar5 = (int *)*param_1;
      do {
        iVar4 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_01583ef4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1583ef4);
        (*pcVar1)();
      }
      uVar3 = param_1[1];
      if (param_4 == 0) {
        local_a8[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        local_b8 = *(int **)(param_4 + 0xc);
        do {
          iVar4 = *local_b8;
          bVar2 = (bool)hasExclusiveAccess(local_b8);
        } while (!bVar2);
        *local_b8 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_01583ef4;
        piVar9 = piVar5 + 2;
        local_b4 = *(undefined4 *)(param_4 + 0x10);
        uVar6 = (*(int **)(param_4 + 4))[1];
        if (uVar3 < uVar6) {
          uVar6 = 0;
        }
        else {
          iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar9,uVar6);
          if (iVar4 != 0) {
            uVar6 = 0;
          }
          piVar9 = (int *)((int)piVar9 + uVar6);
        }
        uStack_90 = FUN_016bc0ec(piVar9,uVar3 - uVar6);
        local_bc = 3;
        local_a8[0] = 2;
      }
      local_38 = FUN_01531840(param_3);
      local_50 = 6;
      local_88 = 0x80000019;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = uVar8;
      local_7c = uVar7;
      local_4c = param_2;
      local_30 = piVar5;
      local_2c = uVar3;
      iVar4 = thunk_FUN_01be5118(0x80);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x80);
      }
      FUN_01bed4e2(iVar4,local_a8,0x80);
    }
  }
  return iVar4;
}


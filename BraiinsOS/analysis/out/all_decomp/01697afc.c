// FUN_01697afc @ 01697afc size=524 calls_out=6 calls_in=2
// strings: 

void FUN_01697afc(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int extraout_r1;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined2 local_3b;
  undefined1 local_39;
  undefined4 *local_38;
  undefined4 *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar8 = *param_1;
  piVar7 = (int *)param_1[3];
  local_39 = 1;
  local_3b = 1;
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x169816c);
    (*pcVar1)();
  }
  iVar3 = piVar7[4];
  if (iVar3 == piVar7[2]) {
    FUN_01699b34();
  }
  puVar4 = (undefined4 *)(piVar7[3] + iVar3 * 0xc);
  *puVar4 = param_2;
  puVar4[1] = uVar8;
  puVar4[2] = &local_3b;
  piVar7[4] = iVar3 + 1;
  local_38 = (undefined4 *)piVar7[0xc];
  local_2c = piVar7[0xd];
  piVar7[0xd] = 0;
  local_28 = 0;
  local_30 = piVar7 + 0xb;
  local_34 = local_38 + local_2c * 3;
  if (local_2c != 0) {
    do {
      piVar9 = (int *)*local_38;
      piVar6 = local_38 + 1;
      local_38 = local_38 + 3;
      piVar5 = piVar9 + 5;
      if (*piVar5 == 0) {
        DataMemoryBarrier(0xb);
LAB_01697bdc:
        bVar2 = (bool)hasExclusiveAccess(piVar5);
        if (!bVar2) goto code_r0x01697be8;
        *piVar5 = *piVar6;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar6 = (int *)(piVar9[4] + 0x18);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = 1;
        if (iVar3 == -1) {
          FUN_016d6968(0xf0,piVar6,0x81,1);
        }
        goto LAB_01697bfc;
      }
LAB_01697bf4:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_01697bfc:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fbaa00(piVar9);
      }
    } while (local_38 != local_34);
  }
  FUN_0063e6b8(&local_38);
  if (((*(char *)(param_1 + 4) == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(piVar7 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar7,0x81,1);
    iVar3 = extraout_r1;
  }
  puVar4 = (undefined4 *)param_1[1];
  iVar3 = FUN_009efc50(param_2,iVar3,*puVar4,puVar4[1],puVar4[2]);
                    /* WARNING: Could not recover jumptable at 0x01697cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01697cd8 + *(int *)(&LAB_01697cd8 + iVar3 * 4)))();
  return;
code_r0x01697be8:
  if (*piVar5 != 0) goto LAB_01697bf4;
  goto LAB_01697bdc;
}


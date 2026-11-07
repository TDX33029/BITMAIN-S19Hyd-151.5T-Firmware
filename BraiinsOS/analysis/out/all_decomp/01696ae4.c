// FUN_01696ae4 @ 01696ae4 size=552 calls_out=6 calls_in=2
// strings: 

void FUN_01696ae4(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int extraout_r1;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar7 = param_2[5];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  piVar8 = (int *)param_2[3];
  local_3c = 0x100;
  uStack_40 = param_2[2];
  do {
    iVar3 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16971e0);
    (*pcVar1)();
  }
  iVar3 = piVar8[4];
  if (iVar3 == piVar8[2]) {
    FUN_01699b34();
  }
  puVar4 = (undefined4 *)(piVar8[3] + iVar3 * 0xc);
  *puVar4 = param_3;
  puVar4[1] = uVar7;
  puVar4[2] = &local_48;
  piVar8[4] = iVar3 + 1;
  local_38 = (undefined4 *)piVar8[0xc];
  local_2c = piVar8[0xd];
  piVar8[0xd] = 0;
  local_28 = 0;
  local_30 = piVar8 + 0xb;
  local_34 = local_38 + local_2c * 3;
  if (local_2c != 0) {
    do {
      piVar9 = (int *)*local_38;
      piVar6 = local_38 + 1;
      local_38 = local_38 + 3;
      piVar5 = piVar9 + 5;
      if (*piVar5 == 0) {
        DataMemoryBarrier(0xb);
LAB_01696bd8:
        bVar2 = (bool)hasExclusiveAccess(piVar5);
        if (!bVar2) goto code_r0x01696be4;
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
        goto LAB_01696bf8;
      }
LAB_01696bf0:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_01696bf8:
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
  if (((*(char *)(param_2 + 4) == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(piVar8 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar8,0x81,1);
    iVar3 = extraout_r1;
  }
  puVar4 = (undefined4 *)param_2[6];
  iVar3 = FUN_009efc50(param_3,iVar3,*puVar4,puVar4[1],puVar4[2]);
                    /* WARNING: Could not recover jumptable at 0x01696cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01696cdc + *(int *)(&LAB_01696cdc + iVar3 * 4)))();
  return;
code_r0x01696be4:
  if (*piVar5 != 0) goto LAB_01696bf0;
  goto LAB_01696bd8;
}


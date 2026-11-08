// FUN_009f71a0 @ 009f71a0 size=512 calls_out=6 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError

void FUN_009f71a0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  int extraout_r2;
  undefined *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  
  iVar2 = thunk_FUN_016de0ee(param_1,param_2,0x2a8);
  puVar7 = (uint *)(iVar2 + extraout_r2);
  if ((*puVar7 & 1) == 0) {
    FUN_0162b20c(&local_38);
  }
  else {
    local_38 = puVar7[1];
    local_34 = puVar7[2];
    uStack_30 = puVar7[3];
    local_2c = puVar7[4];
  }
  iVar2 = *(int *)(param_1 + 0x18 + local_34 * 4);
  DataMemoryBarrier(0xb);
  if ((iVar2 != 0) && (piVar10 = (int *)(iVar2 + local_2c * 0x14), (char)piVar10[4] != '\0')) {
    if (*piVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018ae468);
    }
    iVar13 = -1;
    uVar11 = piVar10[3];
    *piVar10 = -1;
    iVar2 = uVar11 * -0x10;
    uVar5 = uVar11;
    do {
      uVar3 = uVar5;
      if (iVar2 == 0) goto LAB_009f72a0;
      piVar4 = (int *)((piVar10[2] + -0x10) - iVar2);
      iVar2 = iVar2 + 0x10;
      uVar5 = uVar3 - 1;
    } while (*piVar4 != *param_2 || piVar4[1] != param_2[1]);
    if (uVar11 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00602938(uVar5,uVar11,&DAT_018ae4f8);
    }
    iVar2 = piVar10[2] + uVar5 * 0x10;
    cVar1 = *(char *)(iVar2 + 8);
    FUN_016dd52c(iVar2,iVar2 + 0x10,(uVar11 - uVar3) * 0x10);
    iVar13 = *piVar10;
    piVar10[3] = uVar11 - 1;
    if (cVar1 == '\0') {
      *piVar10 = iVar13 + 1;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_018daa78;
      if (DAT_018dd984 != 2) {
        puVar8 = &DAT_018ae394;
      }
      pcVar6 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, DAT_018daa70 != 0)) {
        pcVar6 = DAT_018daa74 + (*(int *)(puVar8 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(puVar8 + 0x40))(pcVar6,param_2[1],*param_2,param_2[1]);
      iVar2 = *(int *)(param_1 + 8);
      goto joined_r0x009f72b0;
    }
LAB_009f72a0:
    *piVar10 = iVar13 + 1;
  }
  iVar2 = *(int *)(param_1 + 8);
joined_r0x009f72b0:
  if (iVar2 != 0) {
    puVar9 = *(undefined4 **)(param_1 + 4);
    puVar12 = puVar9 + iVar2 * 2;
    do {
      (**(code **)(puVar9[1] + 0x38))(*puVar9,param_2,0,0,param_1 + 0xc);
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar12);
  }
  return;
}


// FUN_012fd1a4 @ 012fd1a4 size=616 calls_out=9 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_012fd1a4(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 **ppuVar12;
  undefined4 ***local_58;
  undefined4 local_54;
  int local_44;
  undefined4 **local_40;
  undefined4 **local_3c;
  int **local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 **local_28;
  undefined4 local_24;
  
  uVar7 = *(uint *)(param_2 + 0xa8);
  uVar9 = *(uint *)(param_2 + 0xac);
  if (uVar7 < uVar9) {
LAB_012fd37c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar9,uVar7,&DAT_01890988);
  }
  if (uVar9 != 0) {
    iVar5 = *(int *)(param_2 + 0xa4);
    iVar6 = iVar5 + uVar9 * 0x78;
    do {
      uVar7 = *(uint *)(iVar5 + 0x38);
      uVar9 = *(uint *)(iVar5 + 0x3c);
      if (uVar7 < uVar9) goto LAB_012fd37c;
      iVar11 = *(int *)(iVar5 + 0x34);
      iVar10 = uVar9 * 0x1c;
      while (iVar10 != 0) {
        if (*(char *)(iVar11 + 0xc) != '\x01') goto LAB_012fd244;
        pcVar1 = (char *)(iVar11 + 0x18);
        iVar10 = iVar10 + -0x1c;
        iVar11 = iVar11 + 0x1c;
        if (*pcVar1 == '\x02') {
LAB_012fd244:
          local_28 = (undefined4 **)&DAT_018d8864;
          DataMemoryBarrier(0xb);
          if (DAT_018d8864 != 0) {
            local_38 = (int **)&local_28;
            local_58 = &local_38;
            FUN_015eedc4(&DAT_018d8864,0,&local_58,&DAT_0188f0a0,&DAT_0188e9dc);
          }
          uVar8 = 1;
          iVar5 = *(int *)(DAT_018d8868 + 0x68);
          uVar4 = 0;
          if (*(char *)(iVar5 + 0xc) == '\x01') {
            uVar4 = *(undefined4 *)(iVar5 + 8);
            uVar8 = *(undefined4 *)(iVar5 + 4);
          }
          *param_1 = 1;
          param_1[1] = 3;
          param_1[2] = uVar8;
          param_1[3] = uVar4;
          return;
        }
      }
      iVar5 = iVar5 + 0x78;
    } while (iVar5 != iVar6);
  }
  ppuVar3 = (undefined4 **)FUN_012fc5f0(param_2);
  if ((int)ppuVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,ppuVar3);
  }
  if (ppuVar3 == (undefined4 **)0x0) {
    iVar5 = 1;
    ppuVar12 = (undefined4 **)0x0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(ppuVar3);
    ppuVar12 = ppuVar3;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,ppuVar3);
    }
  }
  local_3c = (undefined4 **)0x0;
  local_58 = (undefined4 ***)0x80000001;
  local_44 = iVar5;
  local_40 = ppuVar3;
  FUN_012fbf3c(&local_38,param_2,&local_58);
  if (local_38 == (undefined4 **)0x4) {
    if (local_58 < (int **)0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_24 = 0;
    local_28 = local_40;
    local_34 = 0;
    local_38 = local_3c;
    if (local_40 != local_3c) {
      FUN_00faf26c(&local_28,&local_38,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x12fd40c);
      (*pcVar2)();
    }
    *param_1 = 0;
    param_1[1] = ppuVar12;
    param_1[2] = iVar5;
    param_1[3] = ppuVar3;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = uStack_30;
    if (0 < (int)local_58) {
      thunk_FUN_016d3fb4(local_54);
    }
    if (ppuVar12 != (undefined4 **)0x0) {
      thunk_FUN_016d3fb4(iVar5);
      return;
    }
  }
  return;
}


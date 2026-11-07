// FUN_01904c3c @ 01904c3c size=752 calls_out=14 calls_in=0
// strings: 

void FUN_01904c3c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_2464;
  undefined1 auStack_2460 [4616];
  undefined4 local_1258;
  undefined4 local_1254;
  uint local_1250;
  undefined4 local_124c;
  undefined4 local_1248;
  uint local_1244;
  uint local_1240;
  uint local_123c [3];
  undefined1 auStack_1230 [4];
  undefined1 auStack_122c [4616];
  
  piVar8 = *(int **)(*(int *)(param_2 + 4) + 8);
  uVar10 = FUN_018fce10(*(undefined4 *)(*(int *)(param_2 + 4) + 0x1c),param_3,param_4,
                        *(undefined4 *)(*piVar8 + 4));
  uVar6 = (uint)(uVar10 >> 0x20);
  iVar5 = (int)uVar10;
  if (iVar5 != 0) {
    puVar1 = (undefined4 *)*piVar8;
    if (*(char *)(puVar1 + 2) == '\0') {
      FUN_01bed93e(&local_1240,0,0x1213);
      if (0x1213ffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar6,0x1213,&DAT_01d2578c);
      }
      FUN_01bed4e2(&local_1240,iVar5,uVar6);
      local_2464 = local_1240;
      FUN_01bed4e2(auStack_2460,auStack_1230,0x1204);
      uVar9 = uVar6;
LAB_01904e04:
      if (uVar6 != 0) {
        thunk_FUN_01be4678(iVar5);
      }
      local_123c[0] = local_2464;
      local_1240 = uVar9;
      FUN_01bed4e2(auStack_122c,auStack_2460,0x1204);
      if (0x1213 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar9,0x1213,&DAT_01d24fc8);
      }
      FUN_0193a93c(param_1 + 1,local_123c,uVar9);
      *param_1 = 0x80000029;
      return;
    }
    uVar9 = *(uint *)(" " + (uint)*(byte *)*puVar1 * 4);
    iVar2 = FUN_01b03abc(iVar5,uVar6);
    if (iVar2 != 0) {
      iVar3 = FUN_01b3cbdc();
      if (iVar3 != 0) {
        FUN_00703a08(&local_1258,iVar3);
        iVar3 = FUN_01b3cbec(iVar2);
        if (iVar3 != 0) {
          FUN_00703a08(&local_124c,iVar3);
          FUN_01bed93e(local_123c,0,0x1213);
          iVar3 = uVar9 - local_1250;
          if (uVar9 < local_1250) {
            puVar7 = &DAT_01d2576c;
          }
          else {
            iVar4 = (int)local_123c + iVar3;
            iVar3 = uVar9 * 2 - local_1244;
            uVar9 = uVar9 << 1;
            FUN_01bed4e2(iVar4);
            if (local_1244 <= uVar9) {
              FUN_01bed4e2((int)local_123c + iVar3,local_1248,local_1244);
              local_2464 = local_123c[0];
              FUN_01bed4e2(auStack_2460,auStack_122c,0x1204);
              FUN_0134bd64(local_124c,local_1248);
              FUN_0134bd64(local_1258,local_1254);
              FUN_01b3cb34(iVar2);
              goto LAB_01904e04;
            }
            puVar7 = &DAT_01d2577c;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(iVar3,uVar9,0x1213,puVar7);
        }
        FUN_0134bd64(local_1258,local_1254);
      }
      FUN_01b3cb34(iVar2);
    }
    if (uVar6 != 0) {
      thunk_FUN_01be4678(iVar5);
    }
  }
  iVar5 = thunk_FUN_01be5118(0xe);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xe);
  }
  FUN_01bed4e2(iVar5,&DAT_005225f8,0xe);
  param_1[2] = iVar5;
  *param_1 = &DAT_80000020;
  param_1[1] = 0xe;
  param_1[3] = 0xe;
  return;
}


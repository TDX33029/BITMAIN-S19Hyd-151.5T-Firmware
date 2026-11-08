// FUN_0155bea8 @ 0155bea8 size=884 calls_out=12 calls_in=0
// strings: 

void FUN_0155bea8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_2460 [4600];
  undefined4 local_1268;
  undefined4 uStack_1264;
  undefined4 uStack_1260;
  undefined4 uStack_125c;
  int local_1258;
  undefined4 local_1254;
  uint local_1250;
  int local_124c;
  undefined4 local_1248;
  uint local_1244;
  undefined4 local_1240;
  undefined4 local_123c [4];
  undefined4 local_122c;
  undefined4 uStack_1228;
  undefined4 uStack_1224;
  undefined4 uStack_1220;
  undefined1 auStack_121c [4600];
  
  piVar7 = *(int **)(*(int *)(param_2 + 4) + 8);
  uVar10 = FUN_0151c80c(*(undefined4 *)(*(int *)(param_2 + 4) + 0x1c),param_3,param_4,
                        *(undefined4 *)(*piVar7 + 4));
  uVar8 = (uint)(uVar10 >> 0x20);
  iVar5 = (int)uVar10;
  if (iVar5 != 0) {
    puVar1 = (undefined4 *)*piVar7;
    if (*(char *)(puVar1 + 2) != '\x01') {
      FUN_016dd606(&local_1240,0,0x1213);
      if (0x1213ffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar8,0x1213,&DAT_018a8e2c);
      }
      FUN_016dd1aa(&local_1240,iVar5,uVar8);
      local_1268 = local_123c[3];
      uStack_1264 = local_122c;
      uStack_1260 = uStack_1228;
      uStack_125c = uStack_1224;
      FUN_016dd1aa(auStack_2460,&uStack_1220,0x11f4);
      uVar9 = uVar8;
joined_r0x0155c038:
      if (uVar8 != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
      local_123c[3] = local_1268;
      local_122c = uStack_1264;
      uStack_1228 = uStack_1260;
      uStack_1224 = uStack_125c;
      FUN_016dd1aa(&uStack_1220,auStack_2460,0x11f4);
      if (uVar9 == 0) {
        uVar8 = 0;
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(uVar9);
        uVar8 = uVar9;
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar9);
        }
      }
      FUN_016dd1aa(iVar5,&local_1240,uVar9);
      param_1[2] = iVar5;
      *param_1 = 0x80000029;
      param_1[1] = uVar8;
      param_1[3] = uVar9;
      return;
    }
    uVar9 = *(uint *)(" " + (uint)*(byte *)*puVar1 * 4);
    iVar2 = FUN_016e83f0(iVar5,uVar8);
    if (iVar2 != 0) {
      iVar3 = FUN_0172c058();
      if (iVar3 != 0) {
        FUN_006049b4(&local_1258,iVar3);
        iVar3 = FUN_0172c070(iVar2);
        if (iVar3 != 0) {
          FUN_006049b4(&local_124c,iVar3);
          FUN_016dd606(local_123c,0,0x1213);
          iVar3 = uVar9 - local_1250;
          if (uVar9 < local_1250) {
            puVar6 = &DAT_018a8e1c;
          }
          else {
            iVar4 = (int)local_123c + iVar3;
            iVar3 = uVar9 * 2 - local_1244;
            uVar9 = uVar9 << 1;
            FUN_016dd1aa(iVar4);
            if (local_1244 <= uVar9) {
              FUN_016dd1aa((int)local_123c + iVar3,local_1248,local_1244);
              local_1268 = local_122c;
              uStack_1264 = uStack_1228;
              uStack_1260 = uStack_1224;
              uStack_125c = uStack_1220;
              FUN_016dd1aa(auStack_2460,auStack_121c,0x11f4);
              if (local_124c != 0) {
                thunk_FUN_016d3fb4(local_1248);
              }
              if (local_1258 != 0) {
                thunk_FUN_016d3fb4(local_1254);
              }
              FUN_0172bf9c(iVar2);
              goto joined_r0x0155c038;
            }
            puVar6 = &DAT_018a8e0c;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(iVar3,uVar9,0x1213,puVar6);
        }
        if (local_1258 != 0) {
          thunk_FUN_016d3fb4(local_1254);
        }
      }
      FUN_0172bf9c(iVar2);
    }
    if (uVar8 != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xe);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xe);
  }
  param_1[2] = puVar1;
  *(undefined2 *)(puVar1 + 3) = 0x6465;
  param_1[3] = 0xe;
  puVar1[2] = 0x6c696166;
  puVar1[1] = 0x20676e69;
  *puVar1 = 0x6e676973;
  *param_1 = 0x80000020;
  param_1[1] = 0xe;
  return;
}


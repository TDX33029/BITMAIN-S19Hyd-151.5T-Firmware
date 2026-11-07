// FUN_0155b758 @ 0155b758 size=736 calls_out=17 calls_in=0
// strings: 

void FUN_0155b758(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int local_4c;
  uint local_48;
  undefined1 auStack_44 [24];
  undefined4 local_2c;
  uint local_28;
  
  iVar10 = *(int *)(param_2 + 4);
  iVar4 = FUN_0173a8d0(*(undefined4 *)(iVar10 + 0x10));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0185779c);
  }
  uVar5 = FUN_0175009c();
  uVar8 = 0;
  if ((int)uVar5 < 0) {
LAB_0155b798:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,uVar5);
  }
  if (uVar5 == 0) {
    local_48 = 0;
    local_4c = 1;
  }
  else {
    uVar8 = 1;
    local_4c = FUN_016d38c8(uVar5,1);
    local_48 = uVar5;
    if (local_4c == 0) goto LAB_0155b798;
  }
  uVar9 = *(undefined4 *)(iVar10 + 0x10);
  piVar6 = (int *)(**(code **)(*(int *)(param_2 + 0xc) + 0x10))(*(undefined4 *)(param_2 + 8));
  iVar4 = *piVar6;
  cVar1 = *(char *)piVar6[1];
  FUN_0172aab0(auStack_44);
  uVar8 = FUN_00605900(iVar4 + 0x18);
  local_2c = 0;
  iVar4 = FUN_0173e5f0(auStack_44,&local_2c,uVar8,0,uVar9);
  uVar8 = local_2c;
  if ((iVar4 == 1) &&
     ((cVar1 == '\0' ||
      ((iVar4 = FUN_0173d550(local_2c,6), iVar4 == 1 &&
       (iVar4 = FUN_0173d59c(uVar8,0xffffffff), iVar4 == 1)))))) {
    local_28 = 0;
    iVar4 = FUN_0173ee3c(auStack_44,0,&local_28,param_3,param_4);
    uVar2 = local_28;
    if ((iVar4 == 1) && (local_28 != 0)) {
      uVar8 = 0;
      if (-1 < (int)local_28) {
        uVar8 = 1;
        iVar4 = FUN_016d38c8(local_28,1);
        if (iVar4 != 0) {
          iVar10 = FUN_0173ee3c(auStack_44,iVar4,&local_28,param_3,param_4);
          uVar3 = local_28;
          if (iVar10 == 1) {
            if (local_28 < uVar2) {
              uVar2 = uVar3;
              if (local_28 == 0) {
                thunk_FUN_016d3fb4(iVar4);
                iVar4 = 1;
              }
              else {
                iVar4 = thunk_FUN_016d4ea4(iVar4,local_28);
                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,uVar3);
                }
              }
            }
            FUN_0172aae8(auStack_44);
            if (uVar5 != uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb7204(uVar5,uVar2,&DAT_018577ac);
            }
            FUN_016dd1aa(local_4c,iVar4,uVar5);
            if (uVar5 != 0) {
              thunk_FUN_016d3fb4(iVar4);
            }
            param_1[3] = uVar5;
            *param_1 = 0x80000029;
            param_1[1] = local_48;
            param_1[2] = local_4c;
            return;
          }
          thunk_FUN_016d3fb4(iVar4);
          goto LAB_0155b930;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,uVar2);
    }
  }
LAB_0155b930:
  FUN_0172aae8(auStack_44);
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_4c);
  }
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xe);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xe);
  }
  param_1[2] = puVar7;
  *(undefined2 *)(puVar7 + 3) = 0x6465;
  param_1[3] = 0xe;
  puVar7[2] = 0x6c696166;
  puVar7[1] = 0x20676e69;
  *puVar7 = 0x6e676973;
  *param_1 = 0x80000020;
  param_1[1] = 0xe;
  return;
}


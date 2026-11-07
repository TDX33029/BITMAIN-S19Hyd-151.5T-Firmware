// FUN_005e5eec @ 005e5eec size=632 calls_out=5 calls_in=4
// strings: 

void FUN_005e5eec(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar6 = *param_2;
  iVar8 = iVar6 + 0xc;
  while( true ) {
    if (*(char *)(iVar6 + 0x2c) == '\0') {
      pbVar2 = *(byte **)(iVar6 + 0x18);
      if (*(int *)(iVar6 + 0x1c) == 0) {
        uVar3 = *(undefined4 *)(iVar6 + 0x20);
        *(byte **)(iVar6 + 0x18) = pbVar2;
        local_30 = 2;
        uVar4 = *(undefined4 *)(iVar6 + 0x24);
        goto LAB_005e601c;
      }
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + -1;
      bVar1 = *pbVar2;
      uVar5 = (uint)bVar1;
      *(byte **)(iVar6 + 0x18) = pbVar2 + 1;
      iVar7 = *(int *)(iVar6 + 0x24) + 1;
      if (uVar5 == 10) {
        *(int *)(iVar6 + 0x28) = iVar7 + *(int *)(iVar6 + 0x28);
        *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 1;
        iVar7 = 0;
      }
      *(byte *)(iVar6 + 0x2d) = bVar1;
      *(undefined1 *)(iVar6 + 0x2c) = 1;
      *(int *)(iVar6 + 0x24) = iVar7;
    }
    else {
      uVar5 = (uint)*(byte *)(iVar6 + 0x2d);
    }
    if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) break;
    *(undefined1 *)(iVar6 + 0x2c) = 0;
    if (*(int *)(iVar6 + 0xc) != -0x80000000) {
      iVar7 = *(int *)(iVar6 + 0x14);
      if (iVar7 == *(int *)(iVar6 + 0xc)) {
        FUN_006029c0(iVar8);
      }
      *(char *)(*(int *)(iVar6 + 0x10) + iVar7) = (char)uVar5;
      *(int *)(iVar6 + 0x14) = iVar7 + 1;
    }
  }
  if (uVar5 == 0x5d) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if ((char)param_2[1] != '\0') {
    param_1[1] = 1;
    *(undefined1 *)(param_2 + 1) = 0;
    *param_1 = 0;
    return;
  }
  if (uVar5 == 0x2c) {
    FUN_00ef8de4(iVar8);
    if (*(char *)(iVar6 + 0x2c) == '\0') goto LAB_005e60ac;
    do {
      bVar1 = *(byte *)(iVar6 + 0x2d);
      while( true ) {
        uVar5 = bVar1 - 9;
        if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
          if (bVar1 != 0x5d) {
            param_1[1] = 1;
            *param_1 = 0;
            return;
          }
          uVar3 = *(undefined4 *)(iVar6 + 0x20);
          uVar4 = *(undefined4 *)(iVar6 + 0x24);
          local_30 = 0x15;
          goto LAB_005e601c;
        }
        FUN_00ef8de4(iVar8);
        if (*(char *)(iVar6 + 0x2c) != '\0') break;
LAB_005e60ac:
        FUN_00ed3ed8(&local_30,iVar6 + 0x18);
        if ((local_30 & 0xff) == 5) {
          uVar3 = *(undefined4 *)(iVar6 + 0x20);
          uVar4 = *(undefined4 *)(iVar6 + 0x24);
          local_30 = 5;
          goto LAB_005e601c;
        }
        if ((local_30 & 0xff) != 4) {
          uVar3 = FUN_0157c4a0(local_30,local_2c);
          goto LAB_005e6024;
        }
        *(byte *)(iVar6 + 0x2d) = local_30._1_1_;
        *(undefined1 *)(iVar6 + 0x2c) = 1;
        bVar1 = local_30._1_1_;
      }
    } while( true );
  }
  uVar3 = *(undefined4 *)(iVar6 + 0x20);
  uVar4 = *(undefined4 *)(iVar6 + 0x24);
  local_30 = 7;
LAB_005e601c:
  uVar3 = FUN_0157c50c(&local_30,uVar3,uVar4);
LAB_005e6024:
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = 1;
  return;
}


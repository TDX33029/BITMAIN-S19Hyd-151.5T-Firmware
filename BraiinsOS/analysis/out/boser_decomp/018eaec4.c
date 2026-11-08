// FUN_018eaec4 @ 018eaec4 size=380 calls_out=5 calls_in=0
// strings: 

void FUN_018eaec4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  int *local_28;
  ushort local_22;
  
  puVar7 = *(undefined1 **)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  FUN_01931148(auStack_38,&DAT_01d232e0,param_2);
  for (iVar5 = iVar5 << 1; iVar5 != 0; iVar5 = iVar5 + -2) {
    uVar2 = *puVar7;
    puVar1 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    uVar4 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 1:
      uVar4 = 2;
      break;
    case 2:
      uVar4 = 3;
      break;
    case 3:
      uVar4 = 4;
      break;
    case 4:
      uVar4 = 5;
      break;
    case 5:
      uVar4 = 6;
      break;
    case 6:
      uVar4 = 0x14;
      break;
    case 7:
      uVar4 = 0x40;
      break;
    case 8:
      uVar4 = 0x41;
      break;
    case 9:
      uVar4 = 0x42;
      break;
    case 10:
      uVar4 = *puVar1;
    }
    iVar3 = local_28[2];
    if (iVar3 == *local_28) {
      FUN_006666a0(local_28);
    }
    *(undefined1 *)(local_28[1] + iVar3) = uVar4;
    local_28[2] = iVar3 + 1;
  }
  FUN_01931818(auStack_38);
  FUN_018e73f4(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_2);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x20);
  FUN_01931148(auStack_3c,&DAT_0056a6b8,param_2);
  for (iVar5 = iVar5 * 0xc; iVar5 != 0; iVar5 = iVar5 + -0xc) {
    uVar6 = *(undefined4 *)(iVar3 + 4);
    uVar8 = *(uint *)(iVar3 + 8);
    local_22 = (ushort)((uVar8 & 0xff) << 8) | (ushort)(uVar8 >> 8) & 0xff;
    FUN_01ac6cbc(local_2c,&local_22,2);
    iVar3 = iVar3 + 0xc;
    FUN_01ac6cbc(local_2c,uVar6,uVar8);
  }
  FUN_01931818(auStack_3c);
  return;
}


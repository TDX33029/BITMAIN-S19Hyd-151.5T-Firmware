// FUN_019196f0 @ 019196f0 size=256 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_019196f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 **ppuVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  undefined4 *puVar7;
  int iVar9;
  undefined4 uVar10;
  undefined4 *local_30;
  byte local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  
  ppuVar3 = &local_30;
  uVar10 = *param_2;
  pcVar5 = *(code **)(param_2[1] + 0xc);
  puVar6 = *(undefined4 **)(*param_1 + 8);
  iVar9 = *(int *)(*param_1 + 0xc);
  iVar1 = (*pcVar5)(uVar10,&DAT_005237d7,0x32);
  uVar4 = 1;
  if (iVar1 == 0) {
    uVar2 = (*pcVar5)(uVar10,&DAT_0053340d,1);
    local_2b = 0;
    local_2c = (byte)uVar2;
    local_30 = param_2;
    if (iVar9 != 0) {
      puVar7 = puVar6;
      do {
        puVar8 = puVar7 + 3;
        local_28 = *puVar7;
        ppuVar3 = (undefined4 **)FUN_01303170(ppuVar3,&local_28,&LAB_0190a794);
        puVar7 = puVar8;
      } while (puVar8 != puVar6 + iVar9 * 3);
      uVar2 = (uint)local_2c;
    }
    if (uVar2 == 0) {
      uVar4 = 1;
      iVar1 = (**(code **)(local_30[1] + 0xc))(*local_30,"]",1);
      if (iVar1 == 0) {
        uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00523809,2);
      }
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}


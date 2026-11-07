// FUN_018e1794 @ 018e1794 size=584 calls_out=7 calls_in=2
// strings: 

void FUN_018e1794(int param_1,int *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  int local_480;
  int iStack_47c;
  int iStack_478;
  int iStack_474;
  int iStack_470;
  int local_46c;
  int iStack_468;
  int iStack_464;
  int iStack_460;
  int iStack_45c;
  int local_458;
  int iStack_454;
  int iStack_450;
  int iStack_44c;
  int iStack_448;
  int iStack_444;
  int local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int local_250;
  int local_24c;
  int iStack_248;
  int iStack_244;
  int local_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int local_40;
  uint local_3c;
  
  iVar3 = *param_2;
  FUN_018a7af8(&local_6a0,
               *(int *)(iVar3 + 0x24) +
               (*(int *)(iVar3 + 0x20) + *(int *)(*(int *)(iVar3 + 4) + 0xc)) * 2);
  local_480 = param_2[9];
  iStack_47c = param_2[10];
  iStack_478 = param_2[0xb];
  iStack_474 = param_2[0xc];
  iStack_470 = param_2[0xd];
  local_46c = param_2[0xe];
  iStack_468 = param_2[0xf];
  iStack_464 = param_2[0x10];
  iStack_460 = param_2[1];
  iStack_45c = param_2[2];
  local_458 = param_2[3];
  iStack_454 = param_2[4];
  iStack_450 = param_2[5];
  iStack_44c = param_2[6];
  iStack_448 = param_2[7];
  iStack_444 = param_2[8];
  local_260 = local_480;
  iStack_25c = iStack_47c;
  iStack_258 = iStack_478;
  iStack_254 = iStack_474;
  local_250 = iStack_470;
  local_24c = local_46c;
  iStack_248 = iStack_468;
  iStack_244 = iStack_464;
  local_240 = iStack_460;
  iStack_23c = iStack_45c;
  local_238 = local_458;
  iStack_234 = iStack_454;
  local_230 = iStack_450;
  iStack_22c = iStack_44c;
  iStack_228 = iStack_448;
  iStack_224 = iStack_444;
  FUN_018e1d14(local_69c,local_698,*(undefined4 *)(iVar3 + 0xc),param_2 + 0x11,0x30,&DAT_0052108a,
               0xd,&local_480,0x40);
  FUN_018d5e70(&local_260,local_69c,local_698,*(undefined4 *)(iVar3 + 4));
  FUN_01bed4e2(&local_6a0,&local_260,0x220);
  FUN_018d5e70(&local_260,local_40,local_3c,*(undefined4 *)(iVar3 + 4));
  FUN_01bed4e2(&local_480,&local_260,0x220);
  uVar2 = *(uint *)(iVar3 + 0x20);
  if (local_3c < uVar2) {
    puVar1 = &DAT_01d22fc8;
  }
  else {
    if (uVar2 <= local_3c - uVar2) {
      FUN_01bed4e2(&local_260,&local_6a0,0x220);
      FUN_01bed4e2(&local_6a0,&local_480,0x220);
      uVar4 = (**(code **)(*(int *)(iVar3 + 0x1c) + 0xc))
                        (*(undefined4 *)(iVar3 + 0x18),&local_6a0,local_40 + uVar2,uVar2);
      uVar5 = (**(code **)(*(int *)(iVar3 + 0x1c) + 0x10))
                        (*(undefined4 *)(iVar3 + 0x18),&local_260,local_40,uVar2,
                         local_40 + uVar2 + uVar2,(local_3c - uVar2) - uVar2);
      FUN_0134bd64(local_6a0,local_69c);
      FUN_01443048(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_01443048(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      *(int *)(param_1 + 0x10) = (int)uVar4;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x14) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined1 *)(param_1 + 0x29) = 1;
      return;
    }
    puVar1 = &DAT_01d22fd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_0053349c,0x13,puVar1);
}


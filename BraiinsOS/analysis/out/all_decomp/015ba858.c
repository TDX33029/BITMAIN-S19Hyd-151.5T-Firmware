// FUN_015ba858 @ 015ba858 size=352 calls_out=3 calls_in=1
// strings: 

void FUN_015ba858(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [68];
  
  iVar5 = param_1[7];
  uVar3 = param_1[6];
  pcVar4 = *(code **)(iVar5 + 0x14);
  uVar1 = (*pcVar4)(uVar3);
  FUN_016dd606(auStack_e8,0,0xc0);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018aa548);
  }
  (**(code **)(iVar5 + 0x28))
            (uVar3,(int)param_1 + 0x61,uVar1,param_2,0x20,3,auStack_e8,0x40,auStack_a8,0x40,
             auStack_68,0x40);
  FUN_016dd1aa((int)param_1 + 0x61,auStack_e8,0x40);
  uVar2 = (*pcVar4)(uVar3);
  (**(code **)(iVar5 + 0x18))(uVar3);
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x40,&DAT_018aa5a8);
  }
  pcVar4 = *(code **)(iVar5 + 0x1c);
  (*pcVar4)(uVar3,(int)param_1 + 0x21,uVar2);
  (*pcVar4)(uVar3,auStack_a8,uVar1);
  (**(code **)(param_1[7] + 0x20))(param_1[6],(int)param_1 + 0x21,0x40);
  (**(code **)(param_1[1] + 0x10))(*param_1,auStack_68,0x20);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// FUN_019ccf60 @ 019ccf60 size=260 calls_out=4 calls_in=2
// strings: 

void FUN_019ccf60(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar7 == 0) {
    uVar5 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = 0;
    uVar4 = unaff_r4;
    do {
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (uVar7 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar5,uVar7,uVar7,&DAT_01d277b4);
      }
      iVar1 = FUN_01be9b18(uVar6,iVar8 + uVar5,uVar7 - uVar5,0x4000);
      if (iVar1 == -1) {
        puVar2 = (uint *)FUN_01be3244();
        uVar3 = *puVar2;
        uVar4 = uVar4 & 0xffffff00;
        *(undefined1 *)(param_2 + 0xc) = 0;
        if (uVar3 != 4) {
          *param_1 = uVar4;
          param_1[1] = uVar3;
          goto LAB_019a4a08;
        }
        FUN_0069d8a4(0,4);
      }
      else {
        *(undefined1 *)(param_2 + 0xc) = 0;
        if (iVar1 == 0) {
          *(undefined1 *)param_1 = 2;
          param_1[1] = (uint)&DAT_01d285ac;
          goto LAB_019a4a08;
        }
        uVar5 = uVar5 + iVar1;
      }
    } while (uVar5 < uVar7);
  }
  *(undefined1 *)param_1 = 4;
LAB_019a4a08:
  if (uVar5 != 0) {
    uVar7 = *(uint *)(param_2 + 8);
    if (uVar7 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar5,uVar7,&DAT_01d28024,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
    }
    *(undefined4 *)(param_2 + 8) = 0;
    if (uVar7 == uVar5) {
      return;
    }
    FUN_01bed864(*(int *)(param_2 + 4),*(int *)(param_2 + 4) + uVar5,uVar7 - uVar5);
    *(uint *)(param_2 + 8) = uVar7 - uVar5;
  }
  return;
}


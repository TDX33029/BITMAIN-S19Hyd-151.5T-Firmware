// FUN_01341078 @ 01341078 size=180 calls_out=4 calls_in=1
// strings: 

void FUN_01341078(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint unaff_r10;
  uint uVar7;
  
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < uVar6) {
    iVar4 = *(int *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    do {
      iVar1 = FUN_01bf053e(uVar5,iVar4 + uVar3,uVar6 - uVar3);
      if (iVar1 == -1) {
        puVar2 = (uint *)FUN_01be3244();
        uVar7 = *puVar2;
        unaff_r10 = unaff_r10 & 0xffffff00;
        if (uVar7 != 4) {
          *param_1 = unaff_r10;
          param_1[1] = uVar7;
          return;
        }
        FUN_0069d8a4(0,4);
      }
      else {
        if (iVar1 == 0) {
          FUN_019a18a8(param_1,0x17,&DAT_00450e19,0x24);
          return;
        }
        uVar3 = uVar3 + iVar1;
        *(uint *)(param_2 + 0x18) = uVar3;
      }
    } while (uVar3 < uVar6);
  }
  *(undefined1 *)param_1 = 4;
  return;
}


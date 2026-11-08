// FUN_006d73e4 @ 006d73e4 size=372 calls_out=6 calls_in=3
// strings: 

void FUN_006d73e4(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined8 uVar10;
  undefined4 local_30;
  undefined8 uStack_2c;
  
  uVar1 = CONCAT44(unaff_r11,unaff_r10);
  if (param_3 == 0) {
    return;
  }
  iVar2 = param_2 + param_3 * 0x24;
  do {
    iVar3 = FUN_006c0238(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x4c),
                         *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x50),
                         *(int *)(param_2 + 0x1c) + 8,*(undefined4 *)(param_2 + 0x20));
    if (*(int *)(param_2 + 0x10) != 0) {
      puVar8 = (undefined4 *)(*(int *)(param_2 + 0xc) + 0xc);
      iVar9 = *(int *)(param_2 + 0x10) * 0x48;
      do {
        uVar6 = 3;
        if (iVar3 != 0) {
          iVar4 = FUN_006e0794(iVar3,puVar8[-1] + 8,*puVar8);
          if (iVar4 != 0) {
            uVar7 = *(undefined4 *)(iVar4 + 0x14);
            uVar6 = *(undefined4 *)(iVar4 + 0x10);
            uVar1 = *(undefined8 *)(iVar4 + 0x10);
            uVar10 = FUN_00700b3c(uVar6,uVar7,0x21);
            if ((int)uVar10 == 0) {
              uVar10 = FUN_006a4c58(uVar6,uVar7);
              if ((int)uVar10 == 0) {
                uVar6 = 2;
              }
              else {
                uVar6 = 0;
                uVar1 = uVar10;
              }
            }
            else {
              uVar6 = 1;
              uVar1 = uVar10;
            }
          }
        }
        iVar4 = *(int *)(param_1 + 0x20);
        if (iVar4 == *(int *)(param_1 + 0x18)) {
          FUN_00b68760(param_1 + 0x18);
        }
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4 * 0xc);
        *puVar5 = uVar6;
        *(undefined8 *)(puVar5 + 1) = uVar1;
        *(int *)(param_1 + 0x20) = iVar4 + 1;
        local_30 = uVar6;
        uStack_2c = uVar1;
        FUN_006dcb48(param_1,&local_30,puVar8 + 3);
        puVar8 = puVar8 + 0x12;
        if (*(int *)(param_1 + 0x20) != 0) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
        iVar9 = iVar9 + -0x48;
      } while (iVar9 != 0);
    }
    param_2 = param_2 + 0x24;
  } while (param_2 != iVar2);
  return;
}


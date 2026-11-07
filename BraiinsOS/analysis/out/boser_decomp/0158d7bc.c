// FUN_0158d7bc @ 0158d7bc size=164 calls_out=2 calls_in=0
// strings: 

int FUN_0158d7bc(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*param_2 == '\x05') && (*(int *)(param_1 + 8) != 0)) {
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    iVar5 = *(int *)(param_1 + 8) << 5;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    do {
      uVar2 = puVar4[-1];
      uVar3 = *puVar4;
      iVar1 = FUN_0196b2cc(uVar6,uVar7,uVar2,uVar3);
      if (iVar1 != 0) {
        local_34 = 0x80000000;
        local_30 = uVar2;
        uStack_2c = uVar3;
        uStack_28 = param_3;
        iVar1 = FUN_015776f4(puVar4 + 1,iVar1,&local_34,param_4,param_5);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      puVar4 = puVar4 + 8;
      iVar5 = iVar5 + -0x20;
    } while (iVar5 != 0);
  }
  return 0;
}


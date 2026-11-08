// FUN_014ddf5c @ 014ddf5c size=100 calls_out=0 calls_in=4
// strings: 

void FUN_014ddf5c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar2;
  undefined4 *puVar1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
  puVar6 = &DAT_80000016;
  if (*(undefined4 **)(param_2 + 4) != *(undefined4 **)(param_2 + 0xc)) {
    puVar1 = *(undefined4 **)(param_2 + 4);
    do {
      puVar2 = puVar1 + 8;
      puVar6 = (undefined1 *)*puVar1;
      if (puVar6 != (undefined1 *)0x80000015) {
        *(undefined4 **)(param_2 + 4) = puVar2;
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        param_1[1] = puVar1[1];
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        uVar3 = puVar1[5];
        uVar4 = puVar1[6];
        uVar5 = puVar1[7];
        param_1[4] = puVar1[4];
        param_1[5] = uVar3;
        param_1[6] = uVar4;
        param_1[7] = uVar5;
        goto LAB_014ddfb8;
      }
      puVar1 = puVar2;
    } while (puVar2 != *(undefined4 **)(param_2 + 0xc));
    *(undefined4 **)(param_2 + 4) = puVar2;
    puVar6 = &DAT_80000016;
  }
LAB_014ddfb8:
  *param_1 = puVar6;
  return;
}


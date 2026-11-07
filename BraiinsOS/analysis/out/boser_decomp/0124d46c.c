// FUN_0124d46c @ 0124d46c size=144 calls_out=1 calls_in=3
// strings: 

void FUN_0124d46c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar5 = *(undefined4 **)(param_2 + 0xc);
  puVar1 = *(undefined4 **)(param_2 + 4);
  do {
    if (puVar1 == puVar5) {
      local_40 = &DAT_80000016;
LAB_0124d4f0:
      *param_1 = local_40;
      return;
    }
    local_40 = (undefined1 *)*puVar1;
    uStack_3c = puVar1[1];
    uStack_38 = puVar1[2];
    uStack_34 = puVar1[3];
    local_30 = puVar1[4];
    uStack_2c = puVar1[5];
    uStack_28 = puVar1[6];
    uStack_24 = puVar1[7];
    *(undefined4 **)(param_2 + 4) = puVar1 + 8;
    if (local_40 != (undefined1 *)0x80000015) {
      uVar2 = puVar1[2];
      uVar3 = puVar1[3];
      param_1[1] = puVar1[1];
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      uVar2 = puVar1[5];
      uVar3 = puVar1[6];
      uVar4 = puVar1[7];
      param_1[4] = puVar1[4];
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = uVar4;
      goto LAB_0124d4f0;
    }
    FUN_0124d4fc(&local_40);
    puVar1 = puVar1 + 8;
  } while( true );
}


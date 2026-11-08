// FUN_00676b4c @ 00676b4c size=108 calls_out=2 calls_in=0
// strings: 

void FUN_00676b4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x94);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x94);
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[0x17] = param_1;
  puVar1[0x18] = param_2;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  puVar1[0x19] = *param_3;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = uVar3;
  puVar1[0x1c] = uVar4;
  puVar1[0x1d] = uVar5;
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  uVar4 = param_3[8];
  uVar5 = param_3[9];
  uVar6 = param_3[10];
  puVar1[0x1e] = param_3[5];
  puVar1[0x1f] = uVar2;
  puVar1[0x20] = uVar3;
  puVar1[0x21] = uVar4;
  puVar1[0x22] = uVar5;
  puVar1[0x23] = uVar6;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  return;
}


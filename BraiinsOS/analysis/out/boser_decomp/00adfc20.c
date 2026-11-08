// FUN_00adfc20 @ 00adfc20 size=124 calls_out=3 calls_in=9
// strings: 

void FUN_00adfc20(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,5);
  }
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0xd8);
  uVar2 = *param_3;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
  *puVar1 = uVar2;
  FUN_019bb7e0(uVar3,uVar4);
  *(undefined4 *)(param_2 + 0xd4) = 5;
  *(undefined4 **)(param_2 + 0xd8) = puVar1;
  *(undefined4 *)(param_2 + 0xdc) = 5;
  FUN_01bed4e2(param_1,param_2,0xe0);
  return;
}


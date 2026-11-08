// FUN_009b3d28 @ 009b3d28 size=288 calls_out=6 calls_in=3
// strings: 

void FUN_009b3d28(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  local_3c = param_1;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  local_38 = &local_3c;
  local_34 = &DAT_00f5c97c;
  FUN_00600d2c(&local_28,&DAT_00590e71,&local_38);
  *puVar1 = local_28;
  puVar1[1] = puStack_24;
  puVar1[2] = uStack_20;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  uVar3 = puVar1[2];
  *puVar2 = puVar1[1];
  puVar2[1] = uVar3;
  FUN_009b4e0c(&local_38,DAT_018d805c + 8,puVar2,1);
  if (local_38 != (undefined4 *)&DAT_00000005) {
    local_1c = local_2c;
    local_28 = local_38;
    puStack_24 = local_34;
    uStack_20 = uStack_30;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01869dec,&DAT_01886b2c);
  }
                    /* WARNING: Could not recover jumptable at 0x009b3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_009b3df0 + *(int *)(&LAB_009b3df0 + *param_2 * 4)))();
  return;
}


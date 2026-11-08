// FUN_00f07680 @ 00f07680 size=224 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00f0778c) */
/* WARNING: Removing unreachable block (ram,0x00f077b4) */
/* WARNING: Removing unreachable block (ram,0x00f077dc) */
/* WARNING: Removing unreachable block (ram,0x00f077e4) */
/* WARNING: Removing unreachable block (ram,0x00f077e8) */

void FUN_00f07680(char param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte local_2a [2];
  undefined1 local_28 [4];
  
  uVar3 = *param_3;
  local_2a[0] = param_1 << 3 | 2;
  FUN_01284394(uVar3,local_2a,1);
  puVar2 = (undefined1 *)*param_2;
  if (puVar2 == &DAT_80000005) {
    local_28[0] = 0;
    FUN_01284394(uVar3,local_28,1);
    return;
  }
  puVar1 = (undefined1 *)0x5;
  if ((int)puVar2 < 0) {
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00f076dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f076e0 + *(int *)(&DAT_00f076e0 + (int)puVar1 * 4)))(9);
  return;
}


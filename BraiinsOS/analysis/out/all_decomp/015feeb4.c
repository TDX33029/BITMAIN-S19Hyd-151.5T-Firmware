// FUN_015feeb4 @ 015feeb4 size=204 calls_out=3 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015fef44) */
/* WARNING: Removing unreachable block (ram,0x015fef54) */
/* WARNING: Removing unreachable block (ram,0x015fef5c) */
/* WARNING: Removing unreachable block (ram,0x015fef60) */

void FUN_015feeb4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  
  FUN_016dd606(auStack_50,0,0x38);
  local_58 = 1;
  local_54 = 0;
  iVar1 = FUN_016d6590(param_2,0xc040ff0b,&local_58);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  param_1[1] = local_48;
  *(undefined1 *)param_1 = 4;
  return;
}


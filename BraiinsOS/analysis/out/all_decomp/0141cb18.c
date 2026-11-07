// FUN_0141cb18 @ 0141cb18 size=204 calls_out=5 calls_in=2
// strings: 

void FUN_0141cb18(int *param_1)

{
  undefined4 *puVar1;
  int local_158;
  int local_154;
  undefined1 auStack_150 [144];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined1 auStack_b0 [152];
  undefined4 *local_18;
  
  local_158 = *param_1;
  local_154 = param_1[1];
  *param_1 = 3;
  param_1[1] = 0;
  if (local_158 != 3 || local_154 != 0) {
    FUN_016dd1aa(auStack_150,param_1 + 2,0x90);
    local_c0 = param_1[0x26];
    iStack_bc = param_1[0x27];
    iStack_b8 = param_1[0x28];
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *(undefined1 *)(puVar1 + 2) = 4;
    *puVar1 = 0;
    FUN_0141cc0c(puVar1,&DAT_00408930,0x11);
    FUN_016dd1aa(auStack_b0,&local_158,0x98);
    local_18 = puVar1;
    FUN_0141c464(&local_c0,auStack_b0);
  }
  return;
}


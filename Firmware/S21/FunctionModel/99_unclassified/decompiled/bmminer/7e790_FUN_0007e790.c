// FUN_0007e790 @ 0007e790  size=236  callers=4
// program: bmminer


undefined4 FUN_0007e790(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  
  local_c = 0;
  do {
    if (param_2 <= local_c) {
      return 1;
    }
    uVar1 = FUN_0007e428(*(undefined1 *)(param_1 + local_c));
    if (uVar1 == 0) {
      return 0;
    }
    if (1 < uVar1) {
      if (param_2 - local_c < uVar1) {
        return 0;
      }
      iVar2 = FUN_0007e50c(param_1 + local_c,uVar1,0);
      if (iVar2 == 0) {
        return 0;
      }
      local_c = (uVar1 + local_c) - 1;
    }
    local_c = local_c + 1;
  } while( true );
}


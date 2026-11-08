// FUN_0134136c @ 0134136c size=284 calls_out=5 calls_in=2
// strings: 

void FUN_0134136c(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  
  FUN_01341298(&local_20);
  if (((char)local_20 == '\x04') || ((local_20 & 0xff) == 4)) {
    FUN_01340e58(&local_20,param_2 + 0x18);
    if (((char)local_20 == '\x04') || ((local_20 & 0xff) == 4)) {
      uVar3 = *(uint *)(param_2 + 0x40);
      while( true ) {
        if (7 < uVar3) {
          *(undefined1 *)param_1 = 4;
          return;
        }
        local_1c = *(undefined4 *)(param_2 + 0x10);
        local_20 = *(uint *)(param_2 + 8);
        if (*(int *)(param_2 + 0x30) == -1) break;
        iVar1 = FUN_01bf053e(*(int *)(param_2 + 0x30),(int)&local_20 + uVar3,8 - uVar3);
        if (iVar1 == -1) {
          puVar2 = (uint *)FUN_01be3244();
          uVar3 = *puVar2;
          *param_1 = 0;
          param_1[1] = uVar3;
          return;
        }
        uVar3 = *(int *)(param_2 + 0x40) + iVar1;
        *(uint *)(param_2 + 0x40) = uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce6874);
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  return;
}


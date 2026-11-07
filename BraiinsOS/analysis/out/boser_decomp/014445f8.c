// FUN_014445f8 @ 014445f8 size=284 calls_out=5 calls_in=2
// strings: 

void FUN_014445f8(undefined4 *param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [20];
  undefined4 local_34;
  int local_30;
  byte local_29;
  undefined4 local_28;
  
  FUN_01304e7c(&local_29);
  if (local_29 == 1) {
    local_34 = param_2;
    local_30 = param_3;
    FUN_013046c0(&local_29,&local_34);
    if ((local_30 == 0) && ((local_29 & 1) != 0)) {
      FUN_01bed4e2(auStack_48,(int)&local_28 + 1,0xf);
      puVar1 = (undefined2 *)thunk_FUN_01be5118(0x20);
      if (puVar1 == (undefined2 *)0x0) goto LAB_01444708;
      *(undefined1 *)(puVar1 + 2) = (undefined1)local_28;
      *puVar1 = 1;
      FUN_01bed4e2((int)puVar1 + 5,auStack_48,0xf);
      puVar1[0xe] = param_4;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      *param_1 = puVar1;
      param_1[1] = puVar1;
      param_1[2] = 1;
      param_1[3] = puVar1 + 0x10;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    puVar1 = (undefined2 *)thunk_FUN_01be5118(0x20);
    if (puVar1 == (undefined2 *)0x0) {
LAB_01444708:
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *puVar1 = 0;
    puVar1[3] = param_4;
    *(undefined4 *)(puVar1 + 1) = local_28;
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = 1;
    param_1[3] = puVar1 + 0x10;
  }
  return;
}


// FUN_0162a128 @ 0162a128 size=252 calls_out=3 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0162a128(uint *param_1,int *param_2,int param_3,undefined4 *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_49;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  undefined1 *puStack_2c;
  
  local_49 = param_5;
  *(undefined1 *)(param_3 + 0xd) = 1;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  *(undefined2 *)(param_3 + 8) = 0x101;
  if (param_4 == (undefined4 *)0x0) {
    uVar1 = 0x180;
  }
  else {
    uVar1 = *param_4;
  }
  *(undefined4 *)(param_3 + 4) = uVar1;
  FUN_015ec1bc(&local_40,param_3,iVar2,iVar3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_40 & 0xff) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_48 = local_40;
  local_44 = local_3c;
  local_38 = *param_2;
  local_34 = param_2[1];
  iStack_30 = param_2[2];
  puStack_2c = &local_49;
  if ((local_40 & 0xff) == 4) {
    uVar4 = FUN_015f3928(&local_38);
    *(undefined1 *)(param_1 + 3) = local_49;
    *param_1 = local_3c;
    *(undefined8 *)(param_1 + 1) = uVar4;
  }
  else {
    *param_1 = local_40;
    param_1[1] = local_3c;
    *(undefined1 *)(param_1 + 3) = 2;
    if (local_38 != 0) {
      thunk_FUN_016d3fb4(local_34);
      return;
    }
  }
  return;
}


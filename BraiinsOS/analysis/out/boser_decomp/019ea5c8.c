// FUN_019ea5c8 @ 019ea5c8 size=184 calls_out=5 calls_in=2
// strings: there is no signal driver running; must be called from the context of Tokio runtime

void FUN_019ea5c8(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined *local_68;
  undefined *local_64;
  undefined *local_60;
  undefined1 local_1c;
  
  uVar5 = FUN_019ef7f4(param_3);
  iVar3 = (int)(uVar5 >> 0x20);
  iVar1 = 0x180;
  if ((uVar5 & 1) != 0) {
    iVar1 = 0xb8;
  }
  if (*(int *)(iVar3 + iVar1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("there is no signal driver running, must be called from the context of Tokio runtime"
                 ,0x53,param_3);
  }
  FUN_019ea158(&local_68,param_2);
  bVar4 = local_68 == (undefined *)0x0;
  if (bVar4) {
    local_1c = 0;
    local_68 = local_64;
    local_64 = local_60;
    puVar2 = (undefined *)FUN_019d849c(&local_68);
    local_60 = &DAT_01d28cf4;
  }
  else {
    puVar2 = local_64;
  }
  param_1[1] = (uint)puVar2;
  param_1[2] = (uint)local_60;
  *param_1 = (uint)!bVar4;
  FUN_014397e4((int)uVar5,iVar3);
  return;
}


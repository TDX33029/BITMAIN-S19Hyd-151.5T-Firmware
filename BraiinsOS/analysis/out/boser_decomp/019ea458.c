// FUN_019ea458 @ 019ea458 size=156 calls_out=3 calls_in=0
// strings: 

void FUN_019ea458(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_38;
  uint uStack_34;
  uint local_30;
  
  param_1 = (undefined4 *)*param_1;
  puVar2 = (uint *)*param_1;
  iVar4 = param_1[3];
  *param_1 = 0;
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d29414);
  }
  FUN_019e8fd8(&local_38,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],
               *(undefined4 *)param_1[1]);
  uVar3 = uStack_34;
  if (local_38 == 0) {
    uVar3 = 4;
  }
  if ((char)*puVar2 != '\x04') {
    FUN_0069603c(puVar2);
  }
  uVar3 = uVar3 & 0xff;
  bVar5 = uVar3 == 4;
  uVar1 = uVar3 | uStack_34 & 0xffffff00;
  if (bVar5) {
    uVar3 = 1;
  }
  *puVar2 = uVar1;
  puVar2[1] = local_30;
  if (bVar5) {
    *(char *)(iVar4 + 0xc) = (char)uVar3;
  }
  return;
}


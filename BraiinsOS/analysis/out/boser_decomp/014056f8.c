// FUN_014056f8 @ 014056f8 size=256 calls_out=3 calls_in=1
// strings: 

void FUN_014056f8(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  short local_170 [80];
  undefined1 auStack_d0 [16];
  ushort local_c0;
  undefined4 local_be;
  
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  if ((uint)param_2[1] < uVar1) {
    uVar3 = uVar1;
  }
  iVar5 = uVar1 * 0xe8 + *param_2 + 0x50;
  while( true ) {
    param_2[2] = uVar1 + 1;
    if ((uVar3 == uVar1) || (FUN_01401e58(local_170,iVar5), local_170[0] == 0x1b)) {
      *param_1 = 2;
      return;
    }
    FUN_01bed4e2(&local_c0,local_170,0x9c);
    sVar2 = 0x10;
    if (1 < local_c0) {
      sVar2 = local_c0 - 2;
    }
    if (sVar2 == 1) break;
    if (sVar2 == 0) {
      uVar4 = 0;
      goto LAB_014057d0;
    }
    FUN_01405500(&local_c0);
    iVar5 = iVar5 + 0xe8;
    uVar1 = uVar1 + 1;
  }
  FUN_01bed4e2(auStack_d0,(uint)local_170 | 6,0xc);
  uVar4 = 1;
LAB_014057d0:
  FUN_01405500(&local_c0);
  *(undefined4 *)(param_1 + 1) = local_be;
  *param_1 = uVar4;
  FUN_01bed4e2(param_1 + 5,auStack_d0,0xc);
  return;
}


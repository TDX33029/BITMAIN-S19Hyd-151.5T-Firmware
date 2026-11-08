// FUN_00b437a8 @ 00b437a8 size=468 calls_out=6 calls_in=1
// strings: 

void FUN_00b437a8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x5a)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x59) = 1;
    param_2[0xc] = param_2[0x14];
    param_2[0xb] = param_2[0x13];
    *param_2 = param_2[4];
    param_2[1] = param_2[5];
    param_2[10] = (int *)param_2[0x10];
    param_2[0xd] = param_2[0x15];
    param_2[2] = param_2[6];
    param_2[3] = param_2[7];
    *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)((int)param_2 + 0x5b);
    param_2[0xe] = param_2[0x12];
    param_2[0xf] = param_2[0x11];
    iVar2 = *(int *)param_2[0x10];
    param_2[9] = 0xffffffff;
    param_2[8] = iVar2 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01870864);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01870864);
  }
  iVar2 = FUN_00c81384(param_2 + 8,param_3);
  if (iVar2 == 0) {
    *(undefined1 *)param_1 = 2;
    *(undefined1 *)((int)param_2 + 0x5a) = 3;
    return;
  }
  iVar3 = param_2[8];
  if (iVar3 != 0) {
    FUN_00c81a4c(iVar3,param_2[9],1);
  }
  uVar4 = (uint)*(ushort *)((int)param_2 + 0x3a);
  if (*(short *)(param_2 + 0xe) == 0) {
    uVar4 = 0xe10;
  }
  uVar6 = uVar4;
  if ((*(char *)(param_2 + 0x16) == '\0') && (*(short *)(param_2 + 0xe) == 0)) {
    uVar4 = *(uint *)(*(int *)(iVar2 + 0x38) + 8);
    uVar6 = *(uint *)(*(int *)(iVar2 + 0x3c) + 8);
  }
  sVar5 = *(short *)(param_2 + 0xf);
  local_4c = param_2[0xc];
  local_50 = param_2[0xb];
  local_48 = param_2[0xd];
  uVar1 = *(undefined2 *)((int)param_2 + 0x3e);
  local_40 = *param_2;
  if (sVar5 == 2) {
    uVar1 = 0xe10;
  }
  *(undefined1 *)((int)param_2 + 0x59) = 0;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = param_2[3];
  if (sVar5 == 2) {
    sVar5 = 1;
  }
  FUN_00baeb40(&local_30,iVar2 + 0x20,&local_50,&local_40,*(char *)(param_2 + 0x16),
               *(undefined4 *)(param_2[10] + 8),uVar4,uVar6,sVar5,uVar1);
  FUN_00c822ec(iVar2);
  *param_1 = local_30;
  param_1[1] = local_2c;
  *(undefined1 *)((int)param_2 + 0x59) = 0;
  *(undefined1 *)((int)param_2 + 0x5a) = 1;
  return;
}


// FUN_006c7b88 @ 006c7b88 size=444 calls_out=8 calls_in=4
// strings: 

bool FUN_006c7b88(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 extraout_s1;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xd)) {
  case 0:
    param_1[8] = param_1[10];
    param_1[0xc] = param_1[0xb];
    param_1[9] = 0xffffffff;
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01859e7c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01859e7c);
  }
  iVar1 = FUN_006f6440(param_1 + 8);
  if (iVar1 == 0) {
    uVar8 = 3;
  }
  else {
    iVar2 = param_1[8];
    if (iVar2 != 0) {
      FUN_006f5d1c(iVar2,param_1[9],1);
    }
    local_6c = 0;
    local_70 = 0xffff0000;
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    FUN_01289fbc(&local_68,&local_88,param_1[0xc]);
    uVar10 = FUN_0184590c(0,local_68,local_64,local_60);
    uVar3 = *(uint *)(iVar1 + 0x20);
    local_6c = 0;
    *(uint *)(iVar1 + 0x20) = uVar3 + 1;
    uVar5 = param_1[0xc];
    *(uint *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + (uint)(0xfffffffe < uVar3);
    local_70 = 0xffff0000;
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    FUN_01289fbc(&local_68,&local_88,uVar5);
    uVar7 = *(uint *)(iVar1 + 0x28);
    uVar3 = *(uint *)(iVar1 + 0x2c);
    uVar6 = *(uint *)(iVar1 + 0x30);
    bVar9 = CARRY4(uVar3,local_64) || CARRY4(uVar3 + local_64,(uint)CARRY4(uVar7,local_68));
    *(uint *)(iVar1 + 0x2c) = uVar3 + local_64 + (uint)CARRY4(uVar7,local_68);
    *(uint *)(iVar1 + 0x30) = uVar6 + local_60 + (uint)bVar9;
    *(uint *)(iVar1 + 0x34) =
         *(int *)(iVar1 + 0x34) + local_5c +
         (uint)(CARRY4(uVar6,local_60) || CARRY4(uVar6 + local_60,(uint)bVar9));
    *(uint *)(iVar1 + 0x28) = uVar7 + local_68;
    iVar4 = *(int *)(iVar1 + 0x3c);
    for (iVar2 = *(int *)(iVar1 + 0x40) * 0x28; iVar2 != 0; iVar2 = iVar2 + -0x28) {
      FUN_01111870(SUB84((double)CONCAT44(extraout_s1,uVar10) * 0.001,0),iVar4);
      iVar4 = iVar4 + 0x28;
    }
    uVar8 = 1;
    FUN_006f625c(iVar1);
  }
  *(undefined1 *)(param_1 + 0xd) = uVar8;
  return iVar1 == 0;
}


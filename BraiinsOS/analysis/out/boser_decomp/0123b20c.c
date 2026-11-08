// FUN_0123b20c @ 0123b20c size=412 calls_out=7 calls_in=0
// strings: 

void FUN_0123b20c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r8;
  uint uVar6;
  bool bVar7;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 auStack_2c8 [72];
  int local_280;
  undefined1 auStack_27c [112];
  int *local_20c;
  int *local_204;
  undefined1 auStack_1f0 [112];
  undefined1 auStack_180 [12];
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_138;
  undefined1 local_134;
  undefined1 auStack_133 [107];
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 auStack_bc [76];
  undefined1 auStack_70 [76];
  
  FUN_01a5c7c0(auStack_2c8);
  do {
    piVar1 = local_20c;
    bVar7 = local_20c == local_204;
    if (!bVar7) {
      unaff_r8 = *local_20c;
      local_20c = local_20c + 0x30;
    }
    if (bVar7 || unaff_r8 == 4) {
      *param_1 = 2;
      goto LAB_0123b398;
    }
    FUN_01bed4e2(auStack_180,piVar1 + 0x1c,0x48);
    FUN_01bed4e2(auStack_1f0,piVar1 + 1,0x6c);
    uVar4 = local_16c;
    uVar3 = local_170;
    uVar2 = local_174;
    local_138 = unaff_r8;
    FUN_01bed4e2((uint)&local_138 | 4,auStack_1f0,0x6c);
    uVar6 = 0;
    if ((uVar2 != 0x80000003) && (uVar6 = (uint)(0x80000001 < uVar2), 0x80000001 < uVar2)) {
      local_2cc = uVar4;
      local_2d0 = uVar3;
    }
    FUN_01a60910(auStack_70,auStack_180);
    local_c0 = local_2cc;
    local_c4 = local_2d0;
    local_c8 = uVar6;
    FUN_01bed4e2(auStack_bc,auStack_70,0x48);
    FUN_01272af8(auStack_bc);
    FUN_01237bd0(auStack_2c8);
    FUN_01bed4e2(auStack_2c8,auStack_180,0x48);
    local_280 = unaff_r8;
    FUN_01bed4e2(auStack_27c,auStack_1f0,0x6c);
    FUN_012383e4(&local_138,auStack_2c8);
    iVar5 = local_138;
  } while (local_138 == 2);
  FUN_01bed4e2(&local_c8,auStack_133,0x2b);
  *(undefined1 *)(param_1 + 1) = local_134;
  *param_1 = iVar5;
  FUN_01bed4e2((int)param_1 + 5,&local_c8,0x2b);
LAB_0123b398:
  FUN_01238f18(auStack_2c8);
  return;
}


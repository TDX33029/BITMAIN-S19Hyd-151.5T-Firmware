// FUN_00769240 @ 00769240 size=596 calls_out=11 calls_in=0
// strings: 

void FUN_00769240(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_240 [30];
  undefined1 auStack_1c8 [80];
  undefined1 auStack_178 [112];
  undefined1 auStack_108 [112];
  uint local_98;
  uint local_94;
  int local_90;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x1c]) {
  case '\0':
    uVar5 = param_2[4];
    uVar3 = param_2[5];
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uVar11 = param_2[2];
    *(undefined1 *)((int)param_2 + 0x71) = 0;
    FUN_019ac130(&local_98,1);
    uVar10 = local_98 + uVar7;
    uVar7 = local_94 + uVar8 + (uint)CARRY4(local_98,uVar7);
    if ((int)uVar8 < 0 == (int)((local_94 ^ uVar7) & ~(local_94 ^ uVar8)) < 0) {
      puVar9 = (undefined1 *)(local_90 + uVar11);
      if (&DAT_3b9aca00 <= puVar9) {
        bVar12 = 0xfffffffe < uVar10;
        uVar10 = uVar10 + 1;
        uVar8 = uVar7 + bVar12;
        if ((int)((uVar7 ^ uVar8) & ~uVar7) < 0) goto LAB_007692fc;
        puVar9 = puVar9 + -1000000000;
        uVar7 = uVar8;
      }
      uVar13 = FUN_019ef7f4(&DAT_01c08658);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      FUN_019dc4f8(&local_98,(int)uVar13,uVar6,uVar6,uVar10,uVar7,puVar9,&DAT_01c08658);
    }
    else {
LAB_007692fc:
      FUN_019e6e14(&local_98);
    }
    FUN_01bed4e2(auStack_1c8,&local_98,0x50);
    FUN_01bed4e2(param_2 + 6,auStack_1c8,0x50);
    param_2[0x1a] = uVar5;
    param_2[0x1b] = uVar3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c08668);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c08668);
  }
  bVar1 = FUN_019ec70c();
  (**(code **)(param_2[0x1b] + 0xc))(&local_98,param_2[0x1a],param_3);
  if (local_98 == 0x80000001) {
    iVar4 = FUN_019ee264(bVar1 == 2 | bVar1 & 1,param_2 + 6,*param_3);
    uVar7 = 0x80000001;
    if (iVar4 != 0) {
      *param_1 = 0x80000002;
      uVar2 = 3;
      goto LAB_00769480;
    }
  }
  else {
    FUN_01bed4e2(auStack_178,&local_94,0x70);
    uVar7 = local_98;
  }
  FUN_01bed4e2(auStack_108,auStack_178,0x70);
  FUN_00769508(param_2 + 6);
  if (uVar7 == 0x80000001) {
    FUN_019a18a8((uint)local_240 | 4,0x16,&DAT_0056a608,0x10);
    local_240[0] = 0x80000001;
  }
  else {
    local_240[0] = uVar7;
    FUN_01bed4e2((uint)local_240 | 4,auStack_108,0x70);
  }
  FUN_01bed4e2(param_1,local_240,0x74);
  uVar2 = 1;
LAB_00769480:
  *(undefined1 *)(param_2 + 0x1c) = uVar2;
  return;
}


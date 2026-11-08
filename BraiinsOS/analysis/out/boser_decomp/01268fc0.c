// FUN_01268fc0 @ 01268fc0 size=176 calls_out=1 calls_in=2
// strings: 

void FUN_01268fc0(int *param_1,uint param_2,undefined1 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint unaff_r8;
  int iVar5;
  bool bVar6;
  int local_40 [3];
  int *local_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 auStack_28 [16];
  
  local_40[0] = *param_1;
  if (local_40[0] == 0) {
    local_40[0] = 0;
LAB_01269048:
    local_40[1] = 0;
    local_40[2] = unaff_r8;
    local_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    FUN_0126d010(auStack_28,local_40);
    return;
  }
  iVar5 = param_1[1];
  do {
    iVar3 = (uint)*(ushort *)(local_40[0] + 0x5e) << 3;
    uVar4 = 0;
    do {
      uVar2 = uVar4;
      unaff_r8 = (uint)*(ushort *)(local_40[0] + 0x5e);
      if (iVar3 == 0) goto LAB_0126902c;
      uVar4 = *(uint *)(local_40[0] + uVar2 * 8);
      iVar3 = iVar3 + -8;
      bVar6 = param_2 < uVar4;
      bVar1 = !bVar6 && param_2 != uVar4;
      uVar4 = uVar2 + 1;
    } while ((char)(bVar1 - bVar6) == '\x01');
    if (bVar1 == bVar6) {
      return;
    }
    unaff_r8 = uVar2;
LAB_0126902c:
    if (iVar5 == 0) goto LAB_01269048;
    iVar5 = iVar5 + -1;
    local_40[0] = *(int *)(local_40[0] + unaff_r8 * 4 + 0x60);
  } while( true );
}


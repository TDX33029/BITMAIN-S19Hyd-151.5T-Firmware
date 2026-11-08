// FUN_015a3700 @ 015a3700 size=324 calls_out=9 calls_in=1
// strings: IPv6:

uint FUN_015a3700(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  
  uVar5 = 1;
  if (*param_2 == '\x03') {
    if (*(char *)(param_1 + 0x11) == '\x02') {
      local_34 = CONCAT22(local_34._2_2_,0x101);
      local_38 = 0;
    }
    else {
      local_38 = *(uint *)(param_1 + 0xc);
      local_34 = *(undefined4 *)(param_1 + 0x10);
    }
    FUN_013249a0(&local_4c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),&local_38);
    uVar5 = 0;
    if (local_4c != -0x80000000) {
      uVar6 = FUN_013250cc(local_48,local_44);
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar7 = FUN_01ad01c4((int)uVar6,uVar3,0x5b);
      if (((int)uVar7 == 0) ||
         (uVar8 = FUN_00700b3c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x5d),
         iVar4 = (int)(uVar8 >> 0x20), iVar1 = (int)uVar8, iVar1 == 0)) {
        uVar5 = FUN_01598294((int)uVar6,uVar3);
      }
      else if ((uVar8 < 0x500000000) || (iVar2 = thunk_FUN_01bed842("IPv6:",iVar1,5), iVar2 != 0)) {
        FUN_01304e7c(&local_38,iVar1,iVar4);
        uVar5 = local_38 & 0xff ^ 1;
      }
      else {
        local_3c = iVar4 + -5;
        local_40 = iVar1 + 5;
        FUN_013046c0(&local_38,&local_40);
        uVar5 = (uint)(local_3c == 0 & (byte)local_38);
      }
      FUN_019bb7e0(local_4c,local_48);
    }
  }
  return uVar5;
}


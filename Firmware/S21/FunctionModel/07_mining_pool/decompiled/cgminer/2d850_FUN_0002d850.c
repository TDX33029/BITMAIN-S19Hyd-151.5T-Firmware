// FUN_0002d850 @ 0002d850  size=292  callers=0
// program: cgminer


void FUN_0002d850(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint local_810;
  char acStack_80c [2048];
  
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar2 = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
          ) + 1;
  bVar4 = DAT_000686f1 != '\0';
  *(uint *)(param_1 + 0x44) =
       uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
  ;
  DAT_00072f24 = DAT_00072f24 + 1;
  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if ((bVar4) && (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    local_810._0_1_ = 'S';
    local_810._1_1_ = 'u';
    local_810._2_1_ = 'c';
    local_810._3_1_ = 'c';
    builtin_strncpy(acStack_80c,"essfully rolled work",0x15);
    FUN_0001dd98(7,&local_810,0);
  }
  iVar3 = *(int *)(param_1 + 0x134);
  if (iVar3 != 0) {
    FUN_0001fb7c(&local_810,iVar3,4);
    uVar2 = (local_810 << 0x18 | (local_810 >> 8 & 0xff) << 0x10 | (local_810 >> 0x10 & 0xff) << 8 |
            local_810 >> 0x18) + 1;
    local_810 = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                uVar2 >> 0x18;
    FUN_0001fa58(iVar3,&local_810,4);
  }
  uVar1 = FUN_0002d7a0();
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  return;
}


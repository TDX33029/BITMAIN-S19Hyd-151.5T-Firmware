// FUN_01b03eb0 @ 01b03eb0 size=268 calls_out=7 calls_in=1
// strings: 

void FUN_01b03eb0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint extraout_r1;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_68 = *param_1;
  uStack_64 = param_1[1];
  local_1c = DAT_01d53560;
  while (iVar1 = FUN_01afd684(&local_68), iVar1 != 0) {
    pcVar3 = (char *)FUN_01afd674(&local_68);
    if (*pcVar3 != '\0') break;
    FUN_01afd638(&local_68,1);
  }
  uVar5 = FUN_01afd684(&local_68);
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  if ((uint)uVar5 < 0x43) {
    uVar2 = FUN_01afd684(&local_68);
    iVar1 = FUN_01b2bdb4(auStack_60,uVar2,param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_01afd684(&local_68);
      lVar6 = FUN_01afd720(&local_68,auStack_60,uVar2);
      goto LAB_01b03f38;
    }
    FUN_01b0535c();
    uVar4 = extraout_r1;
  }
  lVar6 = (ulonglong)uVar4 << 0x20;
LAB_01b03f38:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),local_1c ^ DAT_01d53560,0);
  }
  return;
}


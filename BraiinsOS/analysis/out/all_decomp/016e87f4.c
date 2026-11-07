// FUN_016e87f4 @ 016e87f4 size=272 calls_out=7 calls_in=1
// strings: 

void FUN_016e87f4(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint extraout_r1;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_68 = *param_1;
  uStack_64 = param_1[1];
  local_1c = DAT_018ddaf8;
  while (iVar2 = FUN_016e1e1c(&local_68), iVar2 != 0) {
    pcVar1 = (char *)FUN_016e1e04(&local_68);
    if (*pcVar1 != '\0') break;
    FUN_016e1db8(&local_68,1);
  }
  uVar5 = FUN_016e1e1c(&local_68);
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  if ((uint)uVar5 < 0x43) {
    uVar3 = FUN_016e1e1c(&local_68);
    iVar2 = FUN_01715614(auStack_60,uVar3,param_2);
    if (iVar2 != 0) {
      uVar3 = FUN_016e1e1c(&local_68);
      lVar6 = FUN_016e1edc(&local_68,auStack_60,uVar3);
      goto LAB_016e887c;
    }
    FUN_016e9bf0();
    uVar4 = extraout_r1;
  }
  lVar6 = (ulonglong)uVar4 << 0x20;
LAB_016e887c:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),local_1c ^ DAT_018ddaf8,0);
  }
  return;
}


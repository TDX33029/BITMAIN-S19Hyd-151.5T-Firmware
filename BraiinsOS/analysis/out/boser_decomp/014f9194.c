// FUN_014f9194 @ 014f9194 size=252 calls_out=4 calls_in=2
// strings: 

void FUN_014f9194(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [24];
  int local_48;
  undefined *local_44 [3];
  char local_36;
  undefined1 auStack_35 [17];
  
  local_64 = 0;
  iVar2 = 0;
  local_44[2] = &DAT_01cfa550;
  local_44[1] = (undefined *)0x1;
  local_44[0] = &DAT_01cfa53c;
  local_48 = 1;
  uStack_6c = param_2;
  local_68 = param_3;
  do {
    (**(code **)(*(int *)((int)local_44 + iVar2) + 0x10))
              (&local_36,*(undefined4 *)((int)&local_48 + iVar2),&uStack_6c);
    if (local_36 != '\x02') {
      FUN_01bed4e2(auStack_60,auStack_35,0x11);
      FUN_014f98a8(&local_48);
      cVar1 = '\x02';
      if (local_64 == local_68) {
        FUN_01bed4e2(param_1 + 1,auStack_60,0x11);
        cVar1 = local_36;
      }
      goto LAB_014f9284;
    }
    iVar2 = iVar2 + 8;
    local_64 = 0;
    FUN_01bed4e2(auStack_60,auStack_35,0x11);
  } while (iVar2 != 0x10);
  FUN_014f98a8(&local_48);
  cVar1 = '\x02';
LAB_014f9284:
  *param_1 = cVar1;
  return;
}


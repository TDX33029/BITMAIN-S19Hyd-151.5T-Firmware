// FUN_015bef88 @ 015bef88 size=616 calls_out=7 calls_in=1
// strings: 

void FUN_015bef88(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int extraout_r2;
  undefined4 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined **local_2c;
  undefined1 *local_28;
  undefined *local_24;
  undefined1 local_1a;
  undefined1 uStack_19;
  
  uVar3 = 3;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    uVar10 = thunk_FUN_016de0ee(0,0x254);
    uVar3 = 1;
    if (*(uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20)) < 2) {
      uVar3 = FUN_015bf2c8();
    }
  }
  puVar8 = (undefined4 *)*param_1;
  local_44 = param_1[2];
  pcVar9 = *(code **)(param_1[1] + 0xc);
  (*pcVar9)(&local_30,puVar8);
  iVar4 = 4;
  puVar7 = puVar8;
  if ((local_30 != (undefined4 *)0xd6cb5d6d || local_28 != (undefined1 *)0x57a64178) ||
      (local_2c != (undefined **)0x63eb502c || local_24 != (undefined *)0xb98b1b71)) {
    (*pcVar9)(&local_30,puVar8);
    if ((local_30 != (undefined4 *)0x50f052f7 || local_28 != (undefined1 *)0xdf97b325) ||
        (local_2c != (undefined **)0x9909b2a5 || local_24 != (undefined *)0xb55cb20e)) {
      local_3c = 0xc;
      local_40 = &DAT_00410a53;
      goto LAB_015bf088;
    }
    puVar7 = puVar8 + 1;
    iVar4 = 8;
  }
  local_3c = *(undefined4 *)((int)puVar8 + iVar4);
  local_40 = (undefined *)*puVar7;
LAB_015bf088:
  uVar5 = FUN_015bf7c4();
  local_24 = &DAT_018ab0bc;
  local_28 = &uStack_19;
  local_2c = &local_40;
  local_30 = &local_44;
  uVar10 = thunk_FUN_016de0ee(local_30,uVar5,0x248);
  uVar6 = *(uint *)((int)uVar10 + extraout_r2);
  if (uVar6 < 3) {
    FUN_015bf834(&local_30,0);
  }
  else {
    local_38 = uVar6 - 8;
    FUN_015bf834(&local_30,&local_38);
  }
  cVar2 = DAT_018d9098;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    local_1a = 0;
    local_2c = (undefined **)FUN_015bfd10;
    local_30 = (undefined4 *)&local_1a;
    FUN_015bee18(&local_38,&uStack_19,&DAT_00590e71,&local_30);
    FUN_015ff474(local_38 & 0xff,local_34);
    break;
  case 1:
    local_1a = 1;
    local_2c = (undefined **)FUN_015bfd10;
    local_30 = (undefined4 *)&local_1a;
    FUN_015bee18(&local_38,&uStack_19,&DAT_00590e71,&local_30);
    FUN_015ff474(local_38 & 0xff,local_34);
    break;
  case 2:
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18d9098);
    } while (!bVar1);
    DAT_018d9098 = '\0';
    if (cVar2 != '\0') {
      FUN_015bee18(&local_30,&uStack_19,&DAT_0041085a,0x9d);
      FUN_015ff474((uint)local_30 & 0xff,local_2c);
    }
  }
  FUN_015bfc8c(&DAT_018dd998,(uint)((ulonglong)uVar10 >> 0x20) & 1);
  return;
}


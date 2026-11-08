// FUN_01412d80 @ 01412d80 size=860 calls_out=14 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01412d80(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_22c;
  undefined2 local_228;
  undefined1 auStack_220 [168];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [168];
  uint local_80;
  uint *local_7c;
  undefined1 local_78 [40];
  undefined8 local_50;
  uint local_48;
  undefined *local_44;
  undefined1 *local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  uVar1 = (&switchD_01412da8::switchdataD_01412dac)[(byte)param_2[0x2e]];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)param_2[0x2e]) {
  case 0:
    FUN_016dd1aa(auStack_220,param_2 + 4,0xa8);
    puVar5 = (undefined1 *)param_2[2];
    if (puVar5 != &DAT_3b9aca00) {
      uVar1 = *param_2;
      uVar9 = param_2[1];
      FUN_0165a798(&local_80);
      uVar7 = local_80 + uVar1;
      puVar2 = (undefined *)((int)local_7c + CARRY4(local_80,uVar1) + uVar9);
      if ((int)uVar9 < 0 == (int)(((uint)local_7c ^ (uint)puVar2) & ~((uint)local_7c ^ uVar9)) < 0)
      {
        puVar5 = puVar5 + local_78._0_4_;
        if (&DAT_3b9aca00 <= puVar5) {
          bVar11 = 0xfffffffe < uVar7;
          uVar7 = uVar7 + 1;
          if (-1 < (int)(((uint)puVar2 ^ (uint)(puVar2 + bVar11)) & ~(uint)puVar2)) {
            puVar5 = puVar5 + -1000000000;
            puVar2 = puVar2 + bVar11;
            if (puVar5 != &DAT_3b9aca00) goto LAB_01412ee8;
          }
          goto LAB_01412ed8;
        }
LAB_01412ee8:
        local_30 = FUN_0164ec90(&DAT_018a388c);
        iVar8 = 0x180;
        if ((local_30 & 1) != 0) {
          iVar8 = 0xb8;
        }
        if (*(undefined1 **)((int)(local_30 >> 0x20) + iVar8 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                       ,0x73,&DAT_018a388c);
        }
        local_7c = (uint *)0x0;
        local_80 = 0;
        local_38 = 0;
        local_48 = uVar7;
        local_44 = puVar2;
        local_40 = puVar5;
        local_50 = local_30;
      }
      else {
LAB_01412ed8:
        FUN_01656dc8(&local_80);
        local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
      }
      FUN_016dd1aa(auStack_128,auStack_220,0xa8);
      FUN_016dd1aa(auStack_178,&local_80,0x50);
      uVar1 = FUN_016dd1aa(param_2 + 0x30,auStack_178,0xf8);
      goto switchD_01412da8_caseD_3;
    }
    FUN_016dd1aa(param_2 + 0x30,param_2 + 4,0xa8);
  case 4:
    FUN_01412618(&local_80,param_2 + 0x30,param_3);
    if (local_78[1] == '\x03') {
      *(undefined1 *)((int)param_1 + 9) = 3;
      *(undefined1 *)(param_2 + 0x2e) = 4;
      return;
    }
    local_228 = local_78._2_2_;
    FUN_014117a8(param_2 + 0x30);
    puVar3 = (uint *)(uint)(byte)local_78[0];
    puVar10 = local_7c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a389c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a389c);
  case 3:
switchD_01412da8_caseD_3:
    puVar6 = (uint *)(local_78 + 2);
    uVar12 = thunk_FUN_016de0ee(uVar1,0x40);
    iVar8 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
    puVar3 = param_2 + 0x30;
    bVar4 = *(byte *)(iVar8 + 0x38);
    if (bVar4 == 1) {
LAB_01412fb4:
      bVar4 = ~*(byte *)(iVar8 + 0x30) & 1 | *(char *)(iVar8 + 0x31) != '\0';
    }
    else if (bVar4 != 2) {
      FUN_015e8e6c(iVar8,FUN_009948a0);
      *(undefined1 *)(iVar8 + 0x38) = 1;
      goto LAB_01412fb4;
    }
    FUN_0145bda8(&local_80,param_2 + 0x44,param_3);
    uVar1 = (uint)local_78._0_4_ >> 8 & 0xff;
    if (uVar1 == 3) {
      iVar8 = FUN_016540e8(bVar4 == 2 | bVar4 & 1,puVar3,*param_3);
      if (iVar8 != 0) {
        *(undefined1 *)((int)param_1 + 9) = 3;
        *(undefined1 *)(param_2 + 0x2e) = 3;
        return;
      }
      uVar1 = 3;
      puVar10 = param_1;
    }
    else {
      local_22c = local_80;
      local_228 = local_78._2_2_;
      puVar6 = (uint *)(uint)(byte)local_78[0];
      puVar10 = local_7c;
    }
    FUN_014117a8(param_2 + 0x44);
    FUN_00a07b4c(puVar3);
    local_78[1] = '\x02';
    if (uVar1 == 3) {
      local_80 = 1;
      puVar10 = (uint *)&DAT_018a38ac;
      local_228 = 3;
    }
    else {
      local_78[1] = '\x02';
      if (uVar1 != 2) {
        local_78[1] = (char)uVar1;
      }
      puVar3 = puVar6;
      local_80 = local_22c;
    }
  }
  *param_1 = local_80;
  param_1[1] = (uint)puVar10;
  *(undefined2 *)((int)param_1 + 10) = local_228;
  *(char *)((int)param_1 + 9) = local_78[1];
  *(char *)(param_1 + 2) = (char)puVar3;
  *(undefined1 *)(param_2 + 0x2e) = 1;
  return;
}


// FUN_0008f3f0 @ 0008f3f0  size=1240  callers=0
// program: bmminer


undefined4 FUN_0008f3f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_90 [48];
  uint local_60;
  int iStack_5c;
  size_t local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  
  *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = **(undefined4 **)(param_2 + 0x10);
  local_14 = 0;
  local_18 = *(int *)**(undefined4 **)(param_1 + 0x1434);
  while( true ) {
    if (*(int *)(*(int *)(param_1 + 0x1434) + 4) <= local_14) {
      **(undefined1 **)(*(int *)(param_2 + 0x10) + 4) = 0;
      iVar1 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
      if (iVar1 == 0) {
        local_1c = (char *)**(undefined4 **)(param_2 + 0x10);
        local_20 = open64(local_1c,*(uint *)(param_1 + 0x102c) | 0x441,
                          *(undefined4 *)(param_1 + 0x1028));
        if (local_20 < 0) {
          uVar4 = **(undefined4 **)(param_2 + 0x10);
          piVar2 = __errno_location();
          FUN_00095b4c(2,"src/rule.c",0x127,"open file[%s] fail, errno[%d]",uVar4,*piVar2);
          uVar4 = 0xffffffff;
        }
        else {
          local_24 = *(int *)(*(int *)(param_2 + 0x1c) + 4) - **(int **)(param_2 + 0x1c);
          sVar3 = write(local_20,(void *)**(undefined4 **)(param_2 + 0x1c),local_24);
          if (sVar3 < 0) {
            piVar2 = __errno_location();
            FUN_00095b4c(2,"src/rule.c",0x12d,"write fail, errno[%d]",*piVar2);
            close(local_20);
            uVar4 = 0xffffffff;
          }
          else {
            if ((*(int *)(param_1 + 0x1868) != 0) &&
               (*(int *)(param_1 + 0x186c) = *(int *)(param_1 + 0x186c) + 1,
               *(uint *)(param_1 + 0x1868) <= *(uint *)(param_1 + 0x186c))) {
              *(undefined4 *)(param_1 + 0x186c) = 0;
              iVar1 = fsync(local_20);
              if (iVar1 != 0) {
                piVar2 = __errno_location();
                FUN_00095b4c(2,"src/rule.c",0x134,"fsync[%d] fail, errno[%d]",local_20,*piVar2);
              }
            }
            iVar1 = close(local_20);
            if (iVar1 < 0) {
              piVar2 = __errno_location();
              FUN_00095b4c(2,"src/rule.c",0x138,"write fail, maybe cause by write, errno[%d]",
                           *piVar2);
              uVar4 = 0xffffffff;
            }
            else if (*(uint *)(param_1 + 0x1450) < local_24) {
              FUN_00095b4c(0,"src/rule.c",0x13e,
                           "one msg\'s len[%ld] > archive_max_size[%ld], no rotate",local_24,
                           *(undefined4 *)(param_1 + 0x1450));
              uVar4 = 0;
            }
            else {
              iVar1 = FUN_00099160(local_1c,auStack_90);
              if (iVar1 == 0) {
                iStack_5c = iStack_5c + (uint)CARRY4(local_60,local_24);
                uVar5 = *(uint *)(param_1 + 0x1450);
                iVar1 = (int)uVar5 >> 0x1f;
                bVar7 = local_60 + local_24 < uVar5;
                if ((int)(iStack_5c - (iVar1 + (uint)bVar7)) < 0 ==
                    (SBORROW4(iStack_5c,iVar1) != SBORROW4(iStack_5c - iVar1,(uint)bVar7))) {
                  uVar6 = *(undefined4 *)(DAT_012a29e4 + 0x1428);
                  uVar4 = FUN_0008eb60(param_1,param_2);
                  iVar1 = FUN_0008e39c(uVar6,local_1c,local_24,uVar4,
                                       *(undefined4 *)(param_1 + 0x1450),
                                       *(undefined4 *)(param_1 + 0x1454));
                  if (iVar1 == 0) {
                    uVar4 = 0;
                  }
                  else {
                    FUN_00095b4c(2,"src/rule.c",0x14f,"zlog_rotater_rotate fail");
                    uVar4 = 0xffffffff;
                  }
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                piVar2 = __errno_location();
                FUN_00095b4c(1,"src/rule.c",0x143,"stat [%s] fail, errno[%d], maybe in rotating",
                             local_1c,*piVar2);
                uVar4 = 0;
              }
            }
          }
        }
      }
      else {
        FUN_00095b4c(2,"src/rule.c",0x120,"zlog_format_output fail");
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
    local_18 = *(int *)(**(int **)(param_1 + 0x1434) + local_14 * 4);
    iVar1 = (**(code **)(local_18 + 0x242c))(local_18,param_2);
    if (iVar1 != 0) break;
    local_14 = local_14 + 1;
  }
  FUN_00095b4c(2,"src/rule.c",0x11d,"zlog_spec_gen_path fail");
  return 0xffffffff;
}

